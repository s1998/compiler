#include "lex.h"
#include <stdio.h>
#include <ctype.h>
#include "list.c"
#define curr_symbol *(current)
#define filename "samplecode"

st* table = NULL;

char* yytext; /* Lexeme (not '\0'
                      terminated)              */
int yyleng   = 0;  /* Lexeme length.           */
int yylineno = 0;  /* Input line number        */

void read_code()
{
  table = create_table();
  long length;
  FILE * f = fopen (filename, "r");
  if (f)
  {
    fseek (f, 0, SEEK_END);
    length = ftell (f);
    fseek (f, 0, SEEK_SET);
    yytext = malloc (length + 1);
    // if (yytext)
    //   fread (yytext, length, 1, f);
    // fclose (f);
    int i;
    for (i = 0; i < length; ++i)
      { 
        int c = getc(f);
        yytext[i] = c;
        // printf("*%c*\n", yytext[i]);
      }
    yytext[length] = '\0';
  }
  // printf("*%d*\n", yytext[length] == '\0');
  // printf("\n\n***\n:%s: \n*** \n\n", yytext);
}

int check_assign(char* current)
{
  current++;
  yyleng = current - yytext + 1;
  return (curr_symbol == '=') ? ASSIGN : INVALID;
}

int check_var_or_const(char* current)
{
  char* temp = current;
  if(!isalnum(*current))
     fprintf(stderr, "Not alphanumeric <%c>\n", *current);
  else{
     if(isalpha(*current))
      {
       // printf("----%s----", current);
       while(isalnum(*current))
          ++current;
       // printf("----%s----", current);
       yyleng = current - yytext;
       char* name = (char*)malloc(sizeof(char)*(current - temp + 2));
       char* name_temp = (char*)malloc(sizeof(char)*(current - temp + 1));
       char* attribute = " ";
       strncpy(name_temp, temp, current - temp);
       name_temp[current - temp] = '\0';
       // printf("----%s----", name);
       if(!strcmp(name_temp, "if"))
        return IF;
       if(!strcmp(name_temp, "then"))
        return THEN;
       if(!strcmp(name_temp, "while"))
        return WHILE;
       if(!strcmp(name_temp, "end"))
        return END;
       if(!strcmp(name_temp, "begin"))
        return BEGIN;
       if(!strcmp(name_temp, "do"))
        return DO;
       name[0] = '_';
       strcat(name, name_temp);
       name[current - temp + 1] = '\0';
       insert(table, name, ID, attribute);
       return ID;
      }
      else
      {
       while(isdigit(*current))
        ++current;  
       yyleng = current - yytext;
       char* name = (char*)malloc(sizeof(char)*(current - temp + 1));
       char* attribute = " ";
       strncpy(name, temp, current - temp);
       name[current - temp] = '\0';
       insert(table, name, NUM, attribute);
       return NUM;
      } 
  }
  return INVALID;
}

int lex(void){
  // printf("---%c****", *(yytext + yyleng));
  if(*(yytext + yyleng) == '\0')
    return 0;
   static char input_buffer[1024];
   char        *current;

   current = yytext + yyleng; /* Skip current
                                 lexeme        */

   while(1){       /* Get the next one         */
      while(!*current ){
        // printf(":%s: \n", current);
        // printf(":%s: \n", input_buffer);
         /* Get new lines, skipping any leading
         * white space on the line,
         * until a nonblank line is found.
         */

         current = input_buffer;
         if(!gets(input_buffer)){
            *current = '\0' ;

            return EOI;
         }
         ++yylineno;
         while(isspace(*current))
            ++current;
      }
      for(; *current; ++current){
         /* Get the next token */
        // printf(":%s: \n", current);
         yytext = current;
         yyleng = 1;
         switch( *current ){
           case ';':
            return SEMI;
           case '+':
            return PLUS;
           case '-':
            return MINUS;
           case '*':
            return MULT;
           case '/':
            return DIV;
           case '(':
            return LP;
           case ')':
            return RP;
           case ':':
            return check_assign(current);
           case '>':
            return GT;
           case '<':
            return LT;
           case '=':
            return EQ;
           case '\n':
           case '\t':
           case ' ' :
            break;
           default:
            return check_var_or_const(current);
            break;
         }
      }
   }
}


static int Lookahead = -1; /* Lookahead token  */

int match(int token){
   /* Return true if "token" matches the
      current lookahead symbol.                */

   if(Lookahead == -1)
      Lookahead = lex();
   // if (token == Lookahead)
   // printf("142: %d %d \n", token, Lookahead);
   return token == Lookahead;
}

void advance(void){
/* Advance the lookahead to the next
   input symbol.                               */

    Lookahead = lex();
}

// int main()
// {
//   table = create_table();
//   int temp = 0;
//   while(*(yytext + yyleng) != '\0')
//   {
//     temp = lex();
//     printf("%d %s\n", temp, yytext + yyleng);
//   }
//   read_table(table);
// }
// if a > 5 then if a > 10 then a := 5; 
// 