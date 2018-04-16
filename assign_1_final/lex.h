#define EOI		0	/* End of input			*/
#define SEMI		1	/* ; 				*/
#define PLUS 		2	/* + 				*/
#define MULT		3	/* * 				*/
#define LP		4	/* (				*/
#define RP		5	/* )				*/
#define NUM_OR_ID	6	/* Decimal Number or Identifier */
#define ASSIGN 7
#define INVALID 8
#define MINUS 9
#define DIV 10
#define LT 11
#define GT 12
#define EQ 13
#define ID 14
#define NUM 15
#define IF 16
#define THEN 17
#define WHILE 18
#define END 19
#define BEGIN 20
#define DO 21

extern char *yytext;		/* in lex.c			*/
extern int yyleng;
extern yylineno;
