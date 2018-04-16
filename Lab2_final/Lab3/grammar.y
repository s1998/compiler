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

%token K_IF 1
%token K_ELSE 2
%token K_WHILE 3
%token K_DO 4
%token K_ELIF 5
%token K_FOR 6
%token K_BEGIN 7
%token K_END 8
%token K_PROCESSOR 9
%token K_ISA 10
%token K_CLOCK_SPEED 11
%token K_L1_MEMORY 12
%token K_L2_MEMORY 13
%token K_IS_RUNNING 14
%token K_SUBMIT_JOBS 15
%token K_GET_CLOCK_SPEED 16
%token K_RUN 17
%token K_DISCARD_JOB 18
%token K_ARM 19
%token K_AMD 20
%token K_CDC 21
%token K_MIPS 22
%token K_LINK 23
%token K_START_POINT 24
%token K_END_POINT 25
%token K_BANDWIDTH 26
%token K_CHANNEL_CAPACITY 27
%token K_MEMORY 28
%token K_MEMORY_TYPE 29
%token K_MEM_SIZE 30
%token K_GET_AVAILABLE_MEMORY 31
%token K_JOB 32
%token K_JOB_ID 33
%token K_FLOPS_REQUIRED 34
%token K_DEADLINE 35
%token K_MEM_REQUIRED 36
%token K_AFFINITY 37
%token K_GET_MEMORY 38
%token K_CLUSTER 39
%token K_PROCESSORS 40
%token K_TOPOLOGY 41
%token K_LINK_BANDWIDTH 42
%token K_LINK_CAPACITY 43
%token K_NAME 44
%token ID 45
%token INT 46
%token FLOAT 47
%token LP 48
%token RP 49
%token LB 50
%token RB 51
%token STRING 52
%token LS 53
%token RS 54
%token PLUS 55
%token MINUS 56
%token MULT 57
%token DIV 58
%token RELOP 59
%token COMMA 60
%token SEMI 61
%token COLON 62
%token ASSIGN 63
%token L_AND 64
%token L_OR 65
%token L_NOT 66
%token DOT 67
%token EOFILE 68
%token K_PRIMARY 69
%token K_SECONDARY 70
%token K_CACHE 71
%token SPACE 72
%token K_PRINT_STATS 73
%token K_SCHEDULER 74
%token K_JOBS 75
%token K_ALGO 76
%token K_FCFS 77
%token K_SJN 78
%token K_SRT 79
%token K_RRS 80
%token K_WAIT 81

%%

statements: statement statements
         | epsilon

statement: assign_statement
        | K_IF LP bool_returning_statements RP LB statements RB K_ELSE LB statements RB
        | K_WHILE LP bool_returning_statements RP LB statements RB
        | K_BEGIN statements K_END
        | K_FOR LP assign_statements SEMI bool_returning_statements SEMI 
        assign_statements RP LB statements RB
        | ID DOT function_call_1
        | function_call_2

function_call_1 : 
          K_IS_RUNNING LP RP
        | K_SUBMIT_JOBS LP ID RP
        | K_SUBMIT_JOBS LP array_id RP
        | K_GET_CLOCK_SPEED LP RP
        | K_GET_AVAILABLE_MEMORY LP RP
        | K_GET_MEMORY LP RP
        | K_PRINT_STATS LP RP

function_call_2 : 
          K_RUN LP ID RP
        | K_RUN LP array_id RP
        | K_DISCARD_JOB LP expression RP
        | K_WAIT LP expression RP

bool_returning_statements: bool_returning_statement L_AND bool_returning_statements
                       | bool_returning_statement  L_OR bool_returning_statements
                       | L_NOT bool_returning_statements
                       | bool_returning_statement

bool_returning_statement: expression

assign_statements: assign_statement COMMA assign_statements
               | assign_statement
               | epsilon

assign_statement: ID ASSIGN expression
              | ID LS INT RS ASSIGN expression
              | ID LS ID RS ASSIGN expression
              | ID ASSIGN constructors
              | ID LS INT RS ASSIGN constructors
              | ID LS ID RS ASSIGN constructors

expression: term_prime RELOP expression
        | term_prime

term_prime: term PLUS term_prime
        | term MINUS term_prime
        | term

term: factor MULT term
  | factor DIV term
  | factor

factor: factor_prime

factor_prime: ID DOT function_call_1
          | LP expression RP
          | INT
          | FLOAT
          | STRING
          | function_call_2
          | ID

constructors: K_PROCESSOR LP processor_params RP
            | K_LINK LP link_params RP
            | K_MEMORY LP memory_params RP
            | K_JOB LP job_params RP
            | K_CLUSTER LP cluster_params RP
            | K_SCHEDULER LP scheduler_params RP

processor_params :
              processor_param_isa 
              processor_param_clock_speed  
              processor_param_l1_memory 
              | processor_param_isa 
              processor_param_clock_speed  
              processor_param_l1_memory COMMA
              processor_param_l2_memory COMMA 
              processor_param_name
              | processor_param_isa 
              processor_param_clock_speed  
              processor_param_l1_memory COMMA
              processor_param_l2_memory 
              | processor_param_isa 
              processor_param_clock_speed  
              processor_param_l1_memory COMMA
              processor_param_name 


link_params :
              link_param_start_point 
              link_param_end_point 
              link_param_bandwidth 
              link_param_channel_capacity 
              link_param_name

memory_params :
              memory_param_memory_type 
              memory_param_mem_size 
              memory_param_name

job_params :
              job_param_job_id 
              job_param_flops_required 
              job_param_deadline 
              job_param_mem_required 
              job_param_affinity

cluster_params : 
              cluster_param_processors 
              cluster_param_topology 
              cluster_param_link_bandwidth 
              cluster_param_link_capacity 
              cluster_param_name

scheduler_params : 
              scheduler_param_jobs 
              scheduler_param_processors 
              scheduler_param_algo 

processor_param_isa : K_ISA ASSIGN ISA_values
ISA_values : K_ARM
            | K_AMD
            | K_CDC
            | K_MIPS

processor_param_clock_speed :  COMMA K_CLOCK_SPEED COLON expression

processor_param_l1_memory : 
                    COMMA K_L1_MEMORY ASSIGN ID
                  | COMMA K_L1_MEMORY ASSIGN K_MEMORY LP memory_params RP

processor_param_l2_memory :  K_L2_MEMORY ASSIGN ID
                      |  K_L2_MEMORY ASSIGN K_MEMORY LP memory_params RP
processor_param_name :
     K_NAME ASSIGN STRING 


link_param_start_point : 
    K_START_POINT ASSIGN STRING 
    | K_START_POINT ASSIGN ID 
link_param_end_point : 
    COMMA K_END_POINT ASSIGN STRING
    | COMMA K_END_POINT ASSIGN ID
link_param_bandwidth : 
    COMMA K_BANDWIDTH ASSIGN expression
    | COMMA expression
link_param_channel_capacity : 
    COMMA K_CHANNEL_CAPACITY ASSIGN expression
    | COMMA expression
link_param_name : 
    COMMA K_NAME ASSIGN STRING 
    | COMMA K_NAME ASSIGN ID 
    | epsilon

memory_param_memory_type : 
    K_MEMORY_TYPE ASSIGN memory_type_values
memory_param_mem_size : 
    COMMA K_MEM_SIZE ASSIGN expression
memory_param_name : 
    COMMA K_NAME ASSIGN STRING
    | COMMA K_NAME ASSIGN ID
    | epsilon

memory_type_values :
    K_PRIMARY
    | K_SECONDARY
    | K_CACHE

job_param_job_id : 
    K_JOB_ID ASSIGN expression
    | COMMA expression
job_param_flops_required : 
    COMMA K_FLOPS_REQUIRED ASSIGN expression
    | COMMA expression
job_param_deadline : 
    COMMA K_DEADLINE ASSIGN expression
    | COMMA expression
job_param_mem_required : 
    COMMA K_MEM_REQUIRED ASSIGN expression
    | COMMA expression
job_param_affinity : 
    COMMA K_AFFINITY ASSIGN array_num
    | COMMA K_AFFINITY ASSIGN ID


cluster_param_processors : 
    K_PROCESSORS ASSIGN array_id
    | K_PROCESSORS ASSIGN ID
cluster_param_topology : 
    COMMA K_TOPOLOGY ASSIGN STRING
cluster_param_link_bandwidth : 
    COMMA K_LINK_BANDWIDTH ASSIGN expression
    | COMMA expression
cluster_param_link_capacity : 
    COMMA K_LINK_CAPACITY ASSIGN expression
    | COMMA expression
cluster_param_name : 
    COMMA K_NAME ASSIGN STRING
    | epsilon

scheduler_param_jobs :
    K_JOBS ASSIGN array_id
    | K_JOBS ASSIGN ID
scheduler_param_processors :
    COMMA K_PROCESSORS ASSIGN array_id
    | COMMA K_PROCESSORS ASSIGN ID
scheduler_param_algo :
    COMMA K_ALGO ASSIGN algo_type_values

algo_type_values :
    K_FCFS
    | K_SJN
    | K_SRT
    | K_RRS

array_num : 
  LS expression array_num_items RS

array_num_items : 
  COMMA expression array_num_items
  | epsilon

array_id : 
  LS ID array_id_items RS

array_id_items : 
  COMMA ID array_id_items
  | epsilon

epsilon: 
 
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
    }while (!feof(yyin));
    
}

void yyerror(char *s) {
    cout << "Parse error: " << s << endl;
    exit(-1);
}
