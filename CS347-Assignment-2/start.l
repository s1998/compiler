%{
  #include<stdio.h>
  #include"token.h"
%}
%%
_EOF return EOFILE;
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
\"[^\"]*\" | \'[^\']*\' return STRING;
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
[ \t\n]+  return SPACE;
. printf("Unrecognised\n");
%%

int main(int argc , char **argv){
  ++argv, --argc;
    if ( argc > 0 )
            yyin = fopen( argv[0], "r" );
    else
            yyin = stdin;

  int token = yylex();
  while(token){
    if(token == SPACE ) {token=yylex(); continue;}
    printf("Found token %d for text %s\n",token,yytext);
    token = yylex();
  }

  return 0;

}