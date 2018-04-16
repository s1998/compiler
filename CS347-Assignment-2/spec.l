%{
  #include<stdio.h>
  #include"token.h"
char* token_names[] = {NULL,"EOFILE", "ID", "INT", "FLOAT", "LP", "RP", "LB", "RB", "STRING", "LS", "RS", "K_IF", "K_ELSE", "K_WHILE", "K_DO", "K_ELIF", "K_FOR", "K_BEGIN", "K_END", "PLUS", "MINUS", "MULT", "DIV", "LT", "GT", "COMMA", "SEMI", "EQUALS", "ASSIGN", "L_AND", "L_OR", "L_NOT", "SPACE", "DOT", "COLON"};
%}


%%
if return K_IF;
else return K_ELSE;
while return K_WHILE;
do return K_DO;
elif return K_ELIF;
for return K_FOR;
begin return K_BEGIN;
end return K_END;
[a-zA-Z][a-zA-Z0-9_]*  return ID;
[0-9]+ return INT;
[0-9]+(.[0-9]+)? return FLOAT;
\( return LP;
\) return RP;
\{ return LB;
\} return RB;
\"[^\"]*\"|\'[^\']*\' return STRING;
\[ return LS;
\] return RS;
\+ return PLUS;
\- return MINUS;
\* return MULT;
\/ return DIV;
\< return LT;
\> return GT;
, return COMMA;
\; return SEMI;
== return EQUALS;
=  return ASSIGN ;
\&\& return L_AND;
\|\| return L_OR;
! return L_NOT;
\. return DOT;
\: return COLON;
[ \t\n]+  return SPACE;
<<EOF>> return EOFILE;
. printf("Unrecognised\n");
%%

int main(int argc , char **argv){
  ++argv, --argc;
  yyin = fopen( argv[0], "r" ); 
  int token = yylex();
  while(token != EOFILE){
    if(token == SPACE ) {token=yylex(); continue;}
    printf("Found token %d for text %s\n",token,yytext);
    token = yylex();
  }

   // while(token != EOFILE){
   //   if(token == SPACE ) { printf("%s",yytext);token=yylex(); continue;}
   //   printf("%s",token_names[token]);
   //   token = yylex();
   // }

  return 0;

}