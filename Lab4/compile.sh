bison grammar.y
flex spec.l
g++ --std=c++11 -w -g grammar.tab.c lex.yy.c -lfl -o grammar
./grammar tests/test1.txt
