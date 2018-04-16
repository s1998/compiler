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


%%

statements: statement statements {printf("statements->statement statements \n");}
         | epsilon

statement: assign_statement {printf("statement->assign_statement \n");}
        | K_IF LP bool_returning_statements RP LB statements RB K_ELSE LB statements RB
        | K_WHILE LP bool_returning_statements RP LB statements RB
        | K_BEGIN statements K_END
        | K_FOR LP assign_statements SEMI bool_returning_statements SEMI bool_returning_statements RP LB statements RB
        | ID DOT function_call_1
        | function_call_2

function_call_1 : K_IS_RUNNING LP RP {printf("function_call_1->K_IS_RUNNING LP RP \n");}
        | K_SUBMIT_JOBS LP INT RP
        | K_SUBMIT_JOBS LP array_num RP
        | K_GET_CLOCK_SPEED LP RP
        | K_GET_AVAILABLE_MEMORY LP RP
        | K_GET_MEMORY LP RP
        | K_PRINT_STATS LP RP

function_call_2 : K_RUN LP ID RP {printf("function_call_2->K_RUN LP ID RP \n");}
        | K_RUN LP array_id RP
        | K_DISCARD_JOB LP INT RP

bool_returning_statements: bool_returning_statement L_AND bool_returning_statements {printf("bool_returning_statements->bool_returning_statement L_AND bool_returning_statements \n");}
                       | bool_returning_statement  L_OR bool_returning_statements
                       | L_NOT bool_returning_statements
                       | LP bool_returning_statements RP
                       | bool_returning_statement

bool_returning_statement: expression {printf("bool_returning_statement->expression \n");}

assign_statements: assign_statement COMMA assign_statements {printf("assign_statements->assign_statement COMMA assign_statements \n");}
               | assign_statement
               | epsilon

assign_statement: ID ASSIGN expression {printf("assign_statement->ID ASSIGN expression \n");}
              | ID LS INT RS ASSIGN expression
              | ID ASSIGN constructors
              | ID LS INT RS ASSIGN constructors

expression: term_prime RELOP expression {printf("expression->term_prime RELOP expression \n");}
        | term_prime

term_prime: term PLUS term_prime {printf("term_prime->term PLUS term_prime \n");}
        | term MINUS term_prime
        | term

term: factor MULT term {printf("term->factor MULT term \n");}
  | factor DIV term
  | factor

factor: factor_prime {printf("factor->factor_prime \n");}

factor_prime: ID DOT function_call_1 {printf("factor_prime->ID DOT function_call_1 \n");}
          | LP expression RP
          | INT
          | FLOAT
          | STRING
          | function_call_2

constructors: K_PROCESSOR LP processor_params RP {printf("constructors->K_PROCESSOR LP processor_params RP \n");}
            | K_LINK LP link_params RP
            | K_MEMORY LP memory_params RP
            | K_JOB LP job_params RP
            | K_CLUSTER LP cluster_params RP
            | K_SCHEDULER LP scheduler_params RP

processor_params : processor_param_isa  {printf("processor_params->processor_param_isa  \n");}
              processor_param_clock_speed  
              processor_param_l1_memory 
              processor_param_l2_memory 

link_params : link_param_start_point  {printf("link_params->link_param_start_point  \n");}
              link_param_end_point 
              link_param_bandwidth 
              link_param_channel_capacity 
              link_param_name

memory_params : memory_param_memory_type  {printf("memory_params->memory_param_memory_type  \n");}
              memory_param_mem_size 
              memory_param_name

job_params : job_param_job_id  {printf("job_params->job_param_job_id  \n");}
              job_param_flops_required 
              job_param_deadline 
              job_param_mem_required 
              job_param_affinity

cluster_params : cluster_param_processors  {printf("cluster_params->cluster_param_processors  \n");}
              cluster_param_topology 
              cluster_param_link_bandwidth 
              cluster_param_link_capacity 
              cluster_param_name

scheduler_params :  scheduler_param_jobs  {printf("scheduler_params->scheduler_param_jobs  \n");}
              scheduler_param_processors 
              scheduler_param_algo 

processor_param_isa : K_ISA ASSIGN ISA_values {printf("processor_param_isa->K_ISA ASSIGN ISA_values \n");}

ISA_values : K_ARM {printf("ISA_values->K_ARM \n");}
            | K_AMD
            | K_CDC
            | K_MIPS

processor_param_clock_speed :  COMMA K_CLOCK_SPEED COLON expression {printf("processor_param_clock_speed->COMMA K_CLOCK_SPEED COLON expression \n");}

processor_param_l1_memory : COMMA K_L1_MEMORY ASSIGN ID {printf("processor_param_l1_memory->COMMA K_L1_MEMORY ASSIGN ID \n");}
                      | COMMA K_L1_MEMORY ASSIGN K_MEMORY LP memory_params RP

processor_param_l2_memory : COMMA K_L2_MEMORY ASSIGN ID {printf("processor_param_l2_memory->COMMA K_L2_MEMORY ASSIGN ID \n");}
                      | COMMA K_L2_MEMORY ASSIGN K_MEMORY LP memory_params RP
                      | epsilon

link_param_start_point : K_START_POINT ASSIGN STRING  {printf("link_param_start_point->K_START_POINT ASSIGN STRING  \n");}
link_param_end_point : COMMA K_END_POINT ASSIGN STRING {printf("link_param_end_point->COMMA K_END_POINT ASSIGN STRING \n");}
link_param_bandwidth : COMMA K_BANDWIDTH ASSIGN expression {printf("link_param_bandwidth->COMMA K_BANDWIDTH ASSIGN expression \n");}
link_param_channel_capacity : COMMA K_CHANNEL_CAPACITY ASSIGN expression {printf("link_param_channel_capacity->COMMA K_CHANNEL_CAPACITY ASSIGN expression \n");}
link_param_name : COMMA K_NAME ASSIGN STRING  {printf("link_param_name->COMMA K_NAME ASSIGN STRING  \n");}
    | epsilon

memory_param_memory_type : K_MEMORY_TYPE ASSIGN memory_type_values {printf("memory_param_memory_type->K_MEMORY_TYPE ASSIGN memory_type_values \n");}
memory_param_mem_size : COMMA K_MEM_SIZE ASSIGN expression {printf("memory_param_mem_size->COMMA K_MEM_SIZE ASSIGN expression \n");}
memory_param_name : COMMA K_NAME ASSIGN STRING {printf("memory_param_name->COMMA K_NAME ASSIGN STRING \n");}
    | epsilon

memory_type_values : K_PRIMARY {printf("memory_type_values->K_PRIMARY \n");}
    | K_SECONDARY
    | K_CACHE

job_param_job_id : K_JOB_ID ASSIGN expression {printf("job_param_job_id->K_JOB_ID ASSIGN expression \n");}
job_param_flops_required : COMMA K_FLOPS_REQUIRED ASSIGN expression {printf("job_param_flops_required->COMMA K_FLOPS_REQUIRED ASSIGN expression \n");}
job_param_deadline : COMMA K_DEADLINE ASSIGN expression {printf("job_param_deadline->COMMA K_DEADLINE ASSIGN expression \n");}
    | COMMA K_DEADLINE ASSIGN expression
job_param_mem_required : COMMA K_MEM_REQUIRED ASSIGN expression {printf("job_param_mem_required->COMMA K_MEM_REQUIRED ASSIGN expression \n");}
job_param_affinity : COMMA K_AFFINITY ASSIGN array_num {printf("job_param_affinity->COMMA K_AFFINITY ASSIGN array_num \n");}

cluster_param_processors : K_PROCESSORS ASSIGN array_id {printf("cluster_param_processors->K_PROCESSORS ASSIGN array_id \n");}
cluster_param_topology : COMMA K_TOPOLOGY ASSIGN STRING {printf("cluster_param_topology->COMMA K_TOPOLOGY ASSIGN STRING \n");}
cluster_param_link_bandwidth : COMMA K_LINK_BANDWIDTH ASSIGN expression {printf("cluster_param_link_bandwidth->COMMA K_LINK_BANDWIDTH ASSIGN expression \n");}
cluster_param_link_capacity : COMMA K_LINK_CAPACITY ASSIGN expression {printf("cluster_param_link_capacity->COMMA K_LINK_CAPACITY ASSIGN expression \n");}
cluster_param_name : COMMA K_NAME ASSIGN STRING {printf("cluster_param_name->COMMA K_NAME ASSIGN STRING \n");}
    | epsilon

scheduler_param_jobs : K_JOBS ASSIGN array_id {printf("scheduler_param_jobs->K_JOBS ASSIGN array_id \n");}
scheduler_param_processors : K_PROCESSORS ASSIGN array_id {printf("scheduler_param_processors->K_PROCESSORS ASSIGN array_id \n");}
scheduler_param_algo : K_ALGO ASSIGN algo_type_values {printf("scheduler_param_algo->K_ALGO ASSIGN algo_type_values \n");}

memory_type_values : K_FCFS {printf("memory_type_values->K_FCFS \n");}
    | K_SJN
    | K_SRT
    | K_RRS

array_num : LS expression array_num_items RS {printf("array_num->LS expression array_num_items RS \n");}
  | LS expression array_num_items RS

array_num_items : COMMA expression array_num_items {printf("array_num_items->COMMA expression array_num_items \n");}
  | COMMA expression array_num_items
  | epsilon

array_id : LS ID array_id_items RS {printf("array_id->LS ID array_id_items RS \n");}

array_id_items : COMMA ID array_id_items {printf("array_id_items->COMMA ID array_id_items \n");}
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
    } while (!feof(yyin));
    
}

void yyerror(char *s) {
    cout << "Parse error: " << s << endl;
    exit(-1);
}
