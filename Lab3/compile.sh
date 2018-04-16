bison grammar.y
flex spec.l
g++ -g grammar.tab.c lex.yy.c -lfl -o grammar
./grammar tests/test1.txt
