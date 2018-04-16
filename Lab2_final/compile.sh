bison --debug --verbose -d grammar.y
flex spec.l
g++ -g grammar.tab.c lex.yy.c -lfl -o grammar

