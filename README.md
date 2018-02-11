# COMPILER

Compiler for a small-C like language.

## Getting Started

Compiler for a small-C like language, will generate intermediate and assembly code (8085). Supports following grammar : 

```
stmts -> stmt stmts | epsilon
stmt  -> id := expr | if expr then stmt | while expr do stmt | begin stmts end
expression -> term_prime relop expression | term_prime
term_prime -> term + term_prime | term - term_prime | term
term -> factor * term | factor / term | factor
factor -> num | id | ( expression )
```


## Running the sample code

Sample test cases are present in sample_test. 
Code :
```
z := a + b * (c + d);
```

Sample of parse tree generated is :

```
statements
    statement
        ID := 
            expression
                term_prime
                    term
                        factor
                            Num or ID 
                    arithmetic_op +
                    term
                        factor
                            Num or ID 
                        arithmetic_op *
                        factor
                            (
                                expression
                                    term_prime
                                        term
                                            factor
                                                Num or ID 
                                        arithmetic_op +
                                        term
                                            factor
                                                Num or ID 
                            )
```

### Output printed

Output printed contains symbol table, parse tree and assembly code.

Sample code used is :
```
a := 1;
``` 

Output is :
```
statements
    statement
        ID := 
            expression
                term_prime
                    term
                        factor
                            Num or ID 
parse tree ends




Symbol table : 
_1 15 
_a 14 





LDA _a
MOV B A
MOV C _1
MOV B C
MOV A B 
SDA _a
```

## Implementation details 

Symbol table is stored using linked list.
Hashmap is used to store the ending pairs of if-fi, while-do-done and begin-end. 

## References
For hashmap, source : http://www.kaushikbaruah.com/posts/data-structure-in-c-hashmap/
Initial (basic) source code was given as part of assignment of cs347.

Ankit Kumar Singh, Shubhanshu Verma, Sudhanshu Ranjan.
