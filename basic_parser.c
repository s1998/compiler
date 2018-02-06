/* Basic parser, shows the structure but there's no code generation */
#include <stdio.h>
#include "lex.h"
#include "lex.c"
#define true 1
#define false 0

int statements();
int expression();
int expr_prime();
int term();
int term_prime();
int factor();

int statements()
{
    /*  statements -> expression SEMI
     *             |  expression SEMI statements
     */

    expression();

    if( match( SEMI ) )
	advance();
    else
        fprintf( stderr, "%d: Inserting missing semicolon\n", yylineno );

    if( !match(EOI) )
        statements();			/* Do another statement. */
}

int expression()
{
    /* expression -> term expression' */

    term();
    expr_prime();
}

int expr_prime()
{
    /* expression' -> PLUS term expression'
     *              | epsilon
     */

    if( match( PLUS ) )
    {
        advance();
        term();
        expr_prime();
    }
}

int term()
{
    /* term -> factor term' */

    factor();
    term_prime();
}

int term_prime()
{
    /* term' -> TIMES factor term'
     *       |   epsilon
     */

    if( match( MULT ) )
    {
        advance();
        factor();
        term_prime();
    }
}

int factor()
{
    /* factor   ->    NUM_OR_ID
     *          |     LP expression RP
     */

    if( match(NUM) || match(ID) )
        advance();

    else if( match(LP) )
    {
        advance();
        expression();
        if( match(RP) )
            advance();
        else
            fprintf( stderr, "%d: Mismatched parenthesis\n", yylineno);
    }
    else
    fprintf( stderr, "%d Number or identifier expected\n", yylineno );
}

int main()
{
    table = create_table();
    term();    
    read_table(table);
}
