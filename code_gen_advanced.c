#include <string.h>
#include <stdio.h>
#include "hashmap.c"
#include "lex.h"
#include "lex.c"
#include "name.c"
#define true 1
#define false 0

int spaces = 0;
static int counter_l = 0;
struct table *t;
char    *filename_ic_name = "intermediate_code";
FILE    *filename_ic;
char    *factor     ( void );
char    *term       ( void );
char    *expression ( void );
char    *term_prime ( void );

void parse_main(char* , char* );
extern char *newname( void       );
extern void freename( char *name );
static int code_line_no = 0;
int statements();
int statement();

int statements()
{
    /*  statements -> expression SEMI  |  expression SEMI statements  */
    
    printf("statements\n");
    spaces += 4;
    while( !match(EOI) )
    {
      if(!statement())
        break;
    }
    spaces -= 4;
    printf("parse tree ends\n\n\n\n\n");
}

void printspaces()
{
    int i = spaces;
    while(i)
        printf(" "), i -= 1;
}

int statement()
{
    /*  statements -> expression SEMI  |  expression SEMI statements  */

    char *tempvar, *tempvar2;
    printspaces();
    printf("statement\n");
    spaces += 4;
    if(match(ID))
    {   
        printspaces();
        printf("ID := \n");
        spaces += 4;
        code_line_no++;
        fprintf(filename_ic, " %d \n   %s\n",code_line_no, "assign_operation");
        code_line_no++;
        fprintf(filename_ic, " %d \n   %s = _%0.*s\n",code_line_no, tempvar = newname(), yyleng, yytext);
        advance();
        if(match(ASSIGN))
            advance();
        else
            fprintf(stderr, "%d: Assign operator missing\n", yylineno);

        tempvar2 = expression();
        code_line_no++;
        fprintf(filename_ic, " %d \n   %s = %s\n",code_line_no, tempvar, tempvar2);
        if( match( SEMI ) )
            advance();
        else
            fprintf( stderr, "%d: Inserting missing semicolon\n", yylineno );
        code_line_no++;
        fprintf(filename_ic, " %d \n   %s\n",code_line_no, "assign_operation_ends");
        freename( tempvar );
        freename( tempvar2 );
        spaces -= 4;
    }
    else if(match(IF))
    {
        printspaces();
        printf("IF\n");
        spaces += 4;
        
        advance();
        code_line_no++;
        fprintf(filename_ic, " %d \n  IF \n", code_line_no);
        int line_no = code_line_no+1;
        tempvar = expression();
        if(match(THEN))
            advance();
        else
            fprintf(stderr, "%d: THEN operator missing\n", yylineno);
        
        spaces -= 4;
        printspaces();
        printf("THEN\n");
        spaces += 4;
        
        code_line_no++;
        fprintf(filename_ic, " %d \n  THEN \n", code_line_no);
        statement();
        code_line_no++;
        fprintf(filename_ic, " %d \n FI \n", code_line_no);
        insert_hash(t, line_no, code_line_no);
        freename( tempvar );
        
        spaces -= 4;
    }
    else if(match(WHILE))
    {
        printspaces();
        printf("WHILE\n");
        spaces += 4;
        
        advance();
        code_line_no++;
        fprintf(filename_ic, " %d \n  WHILE\n", code_line_no);
        int line_no = code_line_no+1;
        tempvar = expression();
        if(match(DO))
            advance();
        else
            fprintf(stderr, "%d: DO operator missing\n", yylineno);
        
        spaces -= 4;
        printspaces();
        printf("DO\n");
        spaces += 4;
        
        code_line_no++;
        fprintf(filename_ic, " %d \n  DO\n", code_line_no);
        statement();
        code_line_no++;
        insert_hash(t, line_no, code_line_no);
        fprintf(filename_ic, " %d \n  DONE\n", code_line_no);
        freename( tempvar );
        
        spaces -= 4;
    }
    else if(match(BEGIN))
    {
        printspaces();
        printf("BEGIN\n");
        spaces += 4;
        
        advance();
        code_line_no++;
        fprintf(filename_ic, " %d \n  BEGIN\n", code_line_no);
        statements();
        if(match(END))
            advance();
        else
            fprintf(stderr, "%d END operator missing\n", yylineno);
        code_line_no++;
        
        spaces -= 4;
        printspaces();
        printf("END\n");
        
        fprintf(filename_ic, " %d \n  END\n", code_line_no);
    }
    else
    {
        spaces -= 4;
        return false;
    }
    
    spaces -= 4;
    return true;
}

char    *expression()
{
    /* expression -> term expression'
     * expression' -> PLUS term expression' |  epsilon
     */

    char  *tempvar, *tempvar2;
    printspaces();
    printf("expression\n");
    spaces += 4;

    tempvar = term_prime();
    while( match( LT ) || match( GT ) || match( EQ ))
    {
        char c[10];
        if(match( LT ))
            strcpy(c,"<");
        else if (match( GT ))
            strcpy(c,">");
        else
            strcpy(c,"==");
        advance();
        printspaces();
        printf("relational_op %s\n", c);
        tempvar2 = term_prime();
        code_line_no++;
        fprintf(filename_ic, " %d \n   %s %s %s\n", code_line_no, tempvar, c, tempvar2 );
        freename( tempvar2 );
    }

    spaces -= 4;
    return tempvar;
}


char    *term_prime()
{
    /* expression -> term expression'
     * expression' -> PLUS term expression' |  epsilon
     */
    printspaces();
    printf("term_prime\n");
    spaces += 4;

    char  *tempvar, *tempvar2;

    tempvar = term();
    while( match( PLUS ) || match( MINUS ))
    {
        char c = match(PLUS) ? '+' : '-';
        advance();
        printspaces();
        printf("arithmetic_op %c\n", c);
        tempvar2 = term();
        code_line_no++;
        fprintf(filename_ic, " %d \n   %s %c= %s\n", code_line_no, tempvar, c, tempvar2 );
        freename( tempvar2 );
    }

    spaces -= 4;
    return tempvar;
}

char    *term()
{
    printspaces();
    printf("term\n");
    spaces += 4;
    char  *tempvar, *tempvar2 ;

    tempvar = factor();
    while( match( MULT ) || match( DIV ))
    {
        char c = match(MULT) ? '*' : '/';
        advance();
        printspaces();
        printf("arithmetic_op %c\n", c);
        tempvar2 = factor();
        code_line_no++;
        fprintf(filename_ic, " %d \n   %s %c= %s\n", code_line_no, tempvar, c, tempvar2 );
        freename( tempvar2 );
    }

    spaces -= 4;
    return tempvar;
}

char    *factor()
{
    printspaces();
    printf("factor\n");
    spaces += 4;

    char *tempvar;

    if( match(NUM) || match(ID))
    {
        code_line_no++;
        fprintf(filename_ic, " %d \n   %s = _%0.*s\n", code_line_no, tempvar = newname(), yyleng, yytext );
        advance();
        printspaces();
        printf("Num or ID \n");
    }
    else if( match(LP) )
    {
        printspaces();
        printf("(\n");
        spaces += 4;
        advance();
        tempvar = expression();
        if( match(RP) )
            advance();
        else
            fprintf(stderr, "%d: Mismatched parenthesis\n", yylineno );
        spaces -= 4;
        printspaces();
        printf(")\n");
    }
    else
    fprintf( stderr, "%d: Number or identifier expected\n", yylineno );
    
    spaces -= 4;
    return tempvar;
}

void gen_ic()
{
    // table = create_table();
    t = createTable(100);
    filename_ic = fopen(filename_ic_name, "w");
    read_code();
    statements();
    printf("Symbol table : \n");    
    read_table(table);
    printf("\n\n\n\n\n");    
    fclose(filename_ic);

}

void read_file(char* filename_ip, char** buffer)
{
  char* temp;
  long length;
  FILE * f = fopen (filename_ip, "r");
  if (f)
  {
    fseek (f, 0, SEEK_END);
    length = ftell (f);
    fseek (f, 0, SEEK_SET);
    temp = malloc (length + 1);
    int i;
    for (i = 0; i < length; ++i)
      { 
        int c = getc(f);
        temp[i] = c;
      }
    temp[length] = '\0';
    *buffer = temp;
   } 
}

char * convert(char * reg){
    if(!strcmp("t0" , reg))
        return "B";
    if(!strcmp("t1" , reg))
        return "C";
    if(!strcmp("t2" , reg))
        return "D";
    if(!strcmp("t3" , reg))
        return "E";
    if(!strcmp("t4" , reg))
        return "H";
    if(!strcmp("t5" , reg))
        return "L";
    if(!strcmp("t6" , reg))
        return "A";
    if(!strcmp("t7" , reg))
        return "A";

    // printf(":%s:\n",reg);
    return reg;
}

void parse(char* line)
{   
    char reg1[10], reg2[10], c[5];
    if(strstr(line, "<") || strstr(line, ">") || strstr(line , "=="))
    {
        sscanf(line, "%s %[<>=] %s", reg1, c, reg2);
        if(!strcmp(c, "<")) printf("PUSH A \nMOV A %s\nCMP %s \nPOP A\nJNC label", convert(reg1), convert(reg2));
        else if(!strcmp(c, ">")) printf("PUSH A \nMOV A %s\nCMP %s \nPOP A\nJNC label", convert(reg2), convert(reg1));
        else printf("PUSH A \nMOV A %s\nCMP %s \nPOP A\nJNZ label", convert(reg2), convert(reg1));

    }
    else 
    {
        sscanf(line, "%s %[+-*/=] %s", reg1, c, reg2);
        if (!strcmp(c, "+="))
            //printf("ADD %s %s\n", reg1, reg2);
        	printf("PUSH A \nMOV A %s\nADD %s\nMOV %s A\nPOP A\n", convert(reg1), convert(reg2), convert(reg1));
        else if (!strcmp(c, "-="))
            //printf("SUB %s %s\n", convert(reg1), convert(reg2));
            printf("PUSH A \nMOV A %s\nSUB %s\nMOV %s A\nPOP A\n", convert(reg1), convert(reg2), convert(reg1));
        else if (!strcmp(c, "*="))
            //printf("MUL %s %s\n", convert(reg1), convert(reg2));
        	printf("PUSH A \nMVI C 00\nLDA %s\nMOV B A\nLDA %s\nMOV D A\nMVI A 00\nlabel_mul%d:\nADD B\nDCR D\nJNZ label_mul%d\nJNC loop%d\nINR C\nloop%d : \nSTA E\nMOV A,C\nSTA F\nMOV %s E\nPOP A\n", convert(reg1), convert(reg2), counter_l, counter_l, counter_l, counter_l, convert(reg1)), counter_l += 1;
        else if (!strcmp(c, "/="))
            //printf("DIV %s %s\n", convert(reg1), convert(reg2));
            printf("MOV H %s\nMOV L %s\nPUSH A \nMVI C 00\nMOV B H\nLDA L\nNext%d : \nCMP B\nJC loop_div%d\nSUB B\nINR C\nJMP Next%d\nloop_div%d :\nSTA E\nMOV A,C\nSTA H\nPOP A\nMOV %s H\nMOV %s L\n"
                , convert(reg1), convert(reg2), counter_l, counter_l, counter_l, counter_l,
                convert(reg1), 
                convert(reg2)), counter_l += 1;
        else if (!strcmp(c, "=") )
            printf("MOV %s %s\n", convert(reg1), convert(reg2));
    }

}

char* ic;
void parse_main(char* line, char* paradigm)
{
    while(line = strtok(NULL, "\n"))
    {
        if(strstr(line, paradigm))
            break;
        if(strstr(line, "assign_operation"))
        {
            line = strtok(NULL, "\n");
            line = strtok(NULL, "\n");
            char reg[5];
            char var_name[100];
            sscanf(line, " %s = %s ", reg, var_name);
            // printf(" --------------- %s %s\n", convert(reg), var_name);
            printf("LDA %s\n", var_name);
            printf("MOV %s A\n", convert(reg));
            while(line = strtok(NULL, "\n"))
            {
                if(strstr(line, "assign_operation_ends"))
                {
                    printf("MOV A %s \n", convert(reg));
                    printf("SDA %s\n", var_name);
                    break;
                }
                else
                {
                    parse(line);
                }
            }
        }
        else if(strstr(line, "IF"))
        {
            while(!(line = strtok(NULL, " \n")));
            int start_line_no = atoi(line);
            int end_line_no = lookup(t, start_line_no);
            parse_main(line, "THEN");

            // printing after jc, jz, jnz
            printf("%d \n", end_line_no);
            line = strtok(NULL, "\n");
            parse_main(line, "FI");
            printf("label%d : \n", end_line_no);
        }
        else if(strstr(line, "WHILE"))
        {
            while(!(line = strtok(NULL, " \n")));
            int start_line_no = atoi(line);
            int end_line_no = lookup(t, start_line_no);
            printf("label%d : \n", start_line_no);
            parse_main(line, "DO");
            printf("%d \n", end_line_no);
            parse_main(line, "DONE");
            printf("STC \nJC  label%d\n", start_line_no);
            printf("label%d : \n", end_line_no);
        }
        else if(strstr(line, "BEGIN"))
        {
            parse_main(line, "END");
        }
        else parse(line);
    }
}

void gen_ac()
{
    gen_ic();
    read_file(filename_ic_name, &ic);
    char* line = strtok(ic, "\n");
    // printf("Pass 1 complete")
    parse_main(line, "Nada");

}

int main()
{
    gen_ac();
    // FILE *fp = fopen(filename_ic_name,"a");
    // while(fgets(fp))
}
