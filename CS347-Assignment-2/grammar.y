%{
#include <cstdio>
#include <iostream>
#include <stack>
#include <string>
using namespace std;

extern stack<string> st;
extern stack<int> sp;

int yylex();
extern "C" int yyparse();
extern "C" FILE *yyin;
void yyerror(char *s);

extern char *yytext;
#define YYDEBUG_LEXER_TEXT yytext

extern void helper();
%}



#token K_IF 1
#token K_ELSE 2
#token K_WHILE 3
#token K_DO 4
#token K_ELIF 5
#token K_FOR 6
#token K_BEGIN 7
#token K_END 8
#token K_PROCESSOR 9
#token K_ISA 10
#token K_CLOCK_SPEED 11
#token K_L1_MEMORY 12
#token K_L2_MEMORY 13
#token K_IS_RUNNING 14
#token K_SUBMIT_JOBS 15
#token K_GET_CLOCK_SPEED 16
#token K_RUN 17
#token K_DISCARD_JOB 18
#token K_ARM 19
#token K_AMD 20
#token K_CDC 21
#token K_MIPS 22
#token K_LINK 23
#token K_START_POINT 24
#token K_END_POINT 25
#token K_BANDWIDTH 26
#token K_CHANNEL_CAPACITY 27
#token K_MEMORY 28
#token K_MEMORY_TYPE 29
#token K_MEM_SIZE 30
#token K_GET_AVAILABLE_MEMORY 31
#token K_JOB 32
#token K_JOB_ID 33
#token K_FLOPS_REQUIRED 34
#token K_DEADLINE 35
#token K_MEM_REQUIRED 36
#token K_AFFINITY 37
#token K_GET_MEMORY 38
#token K_CLUSTER 39
#token K_PROCESSORS 40
#token K_TOPOLOGY 41
#token K_LINK_BANDWIDTH 42
#token K_LINK_CAPACITY 43
#token K_NAME 44
#token ID 45
#token INT 46
#token FLOAT 47
#token LP 48
#token RP 49
#token LB 50
#token RB 51
#token STRING 52
#token LS 53
#token RS 54
#token PLUS 55
#token MINUS 56
#token MULT 57
#token DIV 58
#token RELOP 59
#token COMMA 60
#token SEMI 61
#token RELOP 62
#token ASSIGN 63
#token L_AND 64
#token L_OR 65
#token L_NOT 66
#token DOT 67
#token COLON 67
#token EOFILE 68
%%

 
%%
stack<string> st;
stack<int> sp;

void helper()
{
    while(!st.empty())
    {
        int temp = sp.top();
        sp.pop();
        while(temp--) cout<<" ";
        cout<<st.top()<<"\n";
        st.pop();
    }
}

int main(int argc, char *argv[]) {
    if (argc!= 2) {
        cout <<"Usage: <command> filename"<<endl;
        return 1;
    }
    FILE *myfile = fopen(argv[1], "r");
    if (!myfile) {
        cout << "I can't open "<<argv[1]<< endl;
        return -1;
    }
    yyin = myfile;
    
    sp.push(0);
    
    yydebug= 1;
    
    do {
        yyparse();
        printf("yyprse() completed once\n\n\n\n\n");
    } while (!feof(yyin));
    
}

void yyerror(char *s) {
    cout << "Parse error: " << s << endl;
    exit(-1);
}
