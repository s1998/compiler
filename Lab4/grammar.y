  %{
#include <cstdio>
#include <iostream>
#include <stack>
#include <string>
#include <vector>
#include <stdarg.h>
#include "utils.c"

using namespace std;

extern stack<string> st;
int yylex();

typedef struct yy_buffer_state* YY_BUFFER_STATE;
extern int yyparse();
extern YY_BUFFER_STATE yy_scan_string(const char * str);
extern void yy_delete_buffer(YY_BUFFER_STATE buffer);
extern FILE *yyin;
void yyerror(const char *s);
char temp[1024];
vector<string> errors;
extern char* lexeme;
extern char* yytext;

int sp = 0;

int print_parse_tree = 1;
int print_parse_error = 0;
void print_parse(char* c, ...){

if(print_parse_tree)
 { va_list arg;
   int done;
   va_start (arg, c);
   done = vfprintf (stdout, c, arg);
   va_end (arg);
   }
 }

void helper()
{
  int temp = sp;
  while(temp-- && print_parse_tree) printf("  ");
}

char* expected;
extern char *yytext;
extern int yylineno;
extern void helper();
%}

%error-verbose
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
%token K_CLUSTERS 82
%token K_INT 83
%token K_BOOL 84
%token K_FLOAT 85

%union{
        struct node* NT; //non-terminals

        string* s;

        vector<string>* vs;

        struct terminal{  //terminals
                        char *text;
                        int type;
                        int line;
                        int length;
        } Sval;

}

%type <NT> statements 
%type <NT> statement 
%type <NT> assign_statement 
%type <s> DType
%type <vs> DList
%type <Sval> ID
%type <Sval> IDEXP


%%

statements: statement statements
  {
    helper(); 
    print_parse("statements: statement statements\n\n"); 
    sp += 2;
    $$ = createnode();
    $$->children.push_back($1);
    $$->children.push_back($2);
  }
         | epsilon
  {
    helper(); 
    print_parse("statements:  epsilon\n\n"); 
    sp += 2; 
    $$ = createnode();
  }

statement: assign_statement
  {
    helper(); 
    print_parse("statement: assign_statement\n\n"); 
    sp = 0; 
    $$ = createnode();
    $$->children.push_back($1);
    }
        | K_IF LP bool_returning_statements RP LB statements RB K_ELSE LB statements RB
  {
    helper(); 
    print_parse("statement:  K_IF LP bool_returning_statements RP LB statements RB K_ELSE LB statements RB\n\n"); 
    sp = 0; 

  }
        | K_WHILE LP bool_returning_statements RP LB statements RB
  {
    helper(); 
    print_parse("statement:  K_WHILE LP bool_returning_statements RP LB statements RB\n\n"); 
    sp = 0; 
  }
        | K_BEGIN statements K_END
  {
    helper(); 
    print_parse("statement:  K_BEGIN statements K_END\n\n"); 
    sp = 0; 
  }
        | K_FOR LP assign_statements SEMI bool_returning_statements SEMI assign_statements RP LB statements RB
  {
    helper(); 
    print_parse("statement:  K_FOR LP assign_statements SEMI bool_returning_statements SEMI assign_statements RP LB statements RB\n\n"); 
    sp = 0; 
  }
        | ID DOT function_call_1
  {
    helper(); 
    print_parse("statement:  ID DOT function_call_1\n\n"); 
    sp = 0; 
  }
        | function_call_2
  {
    helper(); 
    print_parse("statement:  function_call_2\n\n"); 
    sp = 0; 
  }
        | DType DList 
  {
    helper(); 
    print_parse("statement:  TYPE DList\n\n"); 
    sp += 2; 
    //auto x = *($2);
    vector<string>& x = *$2;
    for(int i = 0; i < x.size(); i++)
    {
      cout<<x[i]<<"----";
    }
  }

DType : K_INT
  {
    helper(); 
    print_parse("DType : K_INT\n\n"); 
    sp = 0; 
    string temp = "INT";
    $$ = &temp;
  }
      | K_FLOAT
  {
    helper(); 
    print_parse("DType : K_FLOAT\n\n"); 
    sp = 0; 
    string temp = "FLOAT";
    $$ = &temp;
  }
      | K_BOOL
  {
    helper(); 
    print_parse("DType : K_BOOL\n\n"); 
    sp = 0; 
    string temp = "BOOL";
    $$ = &temp;
  }
      | K_PROCESSOR
  {
    helper(); 
    print_parse("DType : K_PROCESSOR\n\n"); 
    sp = 0; 
    string temp = "PROCESSOR";
    $$ = &temp;
  }
      | K_LINK
  {
    helper(); 
    print_parse("DType : K_LINK\n\n"); 
    sp = 0; 
    string temp = "LINK";
    $$ = &temp;
  }
      | K_SCHEDULER
  {
    helper(); 
    print_parse("DType : K_SCHEDULER\n\n"); 
    sp = 0; 
    string temp = "SCHEDULER";
    $$ = &temp;
  }
      | K_MEMORY
  {
    helper(); 
    print_parse("DType : K_MEMORY\n\n"); 
    sp = 0; 
    string temp = "MEMORY";
    $$ = &temp;
  }
      | K_CLUSTER
  {
    helper(); 
    print_parse("DType : K_CLUSTER\n\n"); 
    sp = 0; 
    string temp = "CLUSTER";
    $$ = &temp;
  }
      | K_JOB
  {
    helper(); 
    print_parse("DType : K_JOB\n\n"); 
    sp = 0; 
    string temp = "JOB";
    $$ = &temp;
  }

DList : IDEXP COMMA DList
  {
    helper(); 
    print_parse("DList : ID K_COMMA DList\n\n"); 
    sp += 2; 
    $3->push_back($1.text);
    $$ = $3;
    }
        | IDEXP 
  {
    helper(); 
    print_parse("DList : ID \n\n"); 
    sp += 2; 
    $$ = new vector<string>;
    $$->push_back($1.text);
    }

IDEXP : ID
  {
    helper(); 
    print_parse("DList : ID \n\n"); 
    sp += 2; 
    $$.text = (char*)malloc(sizeof(lexeme));
    strcpy($$.text, lexeme);
    $$.length = 1;
    }


function_call_1: K_IS_RUNNING LP RP
  {
    helper(); 
    print_parse("function_call_1: K_IS_RUNNING LP RP\n\n"); 
    sp += 2; 
  }
        | K_GET_CLOCK_SPEED LP RP
  {
    helper(); 
    print_parse("function_call_1:  K_GET_CLOCK_SPEED LP RP\n\n"); 
    sp += 2; 
  }
        | K_GET_AVAILABLE_MEMORY LP RP
  {
    helper(); 
    print_parse("function_call_1:  K_GET_AVAILABLE_MEMORY LP RP\n\n"); 
    sp += 2; 
  }
        | K_GET_MEMORY LP RP
  {
    helper(); 
    print_parse("function_call_1:  K_GET_MEMORY LP RP\n\n"); 
    sp += 2; 
  }
        | K_PRINT_STATS LP RP
  {
    helper(); 
    print_parse("function_call_1:  K_PRINT_STATS LP RP\n\n"); 
    sp += 2; 
  }

function_call_2: K_RUN LP ID RP
  {
    helper(); 
    print_parse("function_call_2: K_RUN LP ID RP\n\n"); 
    sp += 2; 
  }
        | K_RUN LP array_id RP
  {
    helper(); 
    print_parse("function_call_2:  K_RUN LP array_id RP\n\n"); 
    sp += 2; 
  }
        | K_DISCARD_JOB LP expression RP
  {
    helper(); 
    print_parse("function_call_2:  K_DISCARD_JOB LP expression RP\n\n"); 
    sp += 2; 
  }
        | K_WAIT LP expression RP
  {
    helper(); 
    print_parse("function_call_2:  K_WAIT LP expression RP\n\n"); 
    sp += 2; 
  }

bool_returning_statements: bool_returning_statement L_AND bool_returning_statements
  {
    helper(); 
    print_parse("bool_returning_statements: bool_returning_statement L_AND bool_returning_statements\n\n"); 
    sp += 2; 
  }
                       | bool_returning_statement  L_OR bool_returning_statements
  {
    helper(); 
    print_parse("bool_returning_statements:  bool_returning_statement  L_OR bool_returning_statements\n\n"); 
    sp += 2; 
  }
                       | L_NOT bool_returning_statements
  {
    helper(); 
    print_parse("bool_returning_statements:  L_NOT bool_returning_statements\n\n"); 
    sp += 2; 
  }
                       | bool_returning_statement
  {
    helper(); 
    print_parse("bool_returning_statements:  bool_returning_statement\n\n"); 
    sp += 2; 
  }

bool_returning_statement: expression
  {
    helper(); 
    print_parse("bool_returning_statement: expression\n\n"); 
    sp += 2; 
  }

assign_statements: assign_statement COMMA assign_statements
  {
    helper(); 
    print_parse("assign_statements: assign_statement COMMA assign_statements\n\n"); 
    sp += 2; 
  }
               | assign_statement
  {
    helper(); 
    print_parse("assign_statements:  assign_statement\n\n"); 
    sp += 2; 
  }
               | epsilon
  {
    helper(); 
    print_parse("assign_statements:  epsilon\n\n"); 
    sp += 2; 
  }

assign_statement: ID ASSIGN expression
  {
    helper(); 
    print_parse("assign_statement: ID ASSIGN expression\n\n"); 
    sp += 2; 

  }
              | ID LS INT RS ASSIGN expression
  {
    helper(); 
    print_parse("assign_statement:  ID LS INT RS ASSIGN expression\n\n"); 
    sp += 2; 
  }
              | ID LS ID RS ASSIGN expression
  {
    helper(); 
    print_parse("assign_statement:  ID LS ID RS ASSIGN expression\n\n"); 
    sp += 2; 
  }
              | ID ASSIGN constructors
  {
    helper(); 
    print_parse("assign_statement:  ID ASSIGN constructors\n\n"); 
    sp += 2; 
  }
              | ID LS INT RS ASSIGN constructors
  {
    helper(); 
    print_parse("assign_statement:  ID LS INT RS ASSIGN constructors\n\n"); 
    sp += 2; 
  }
              | ID LS ID RS ASSIGN constructors
  {
    helper(); 
    print_parse("assign_statement:  ID LS ID RS ASSIGN constructors\n\n"); 
    sp += 2; 
  }

expression: term_prime RELOP expression
  {
    helper(); 
    print_parse("expression: term_prime RELOP expression\n\n"); 
    sp += 2; 
  }
        | term_prime
  {
    helper(); 
    print_parse("expression:  term_prime\n\n"); 
    sp += 2; 
  }

term_prime: term PLUS term_prime
  {
    helper(); 
    print_parse("term_prime: term PLUS term_prime\n\n"); 
    sp += 2; 
  }
        | term MINUS term_prime
  {
    helper(); 
    print_parse("term_prime:  term MINUS term_prime\n\n"); 
    sp += 2; 
  }
        | term
  {
    helper(); 
    print_parse("term_prime:  term\n\n"); 
    sp += 2; 
  }

term: factor MULT term
  {
    helper(); 
    print_parse("term: factor MULT term\n\n"); 
    sp += 2; 
  }
  | factor DIV term
  {
    helper(); 
    print_parse("term:  factor DIV term\n\n"); 
    sp += 2; 
  }
  | factor
  {
    helper(); 
    print_parse("term:  factor\n\n"); 
    sp += 2; 
  }

factor: factor_prime
  {
    helper(); 
    print_parse("factor: factor_prime\n\n"); 
    sp += 2; 
  }

factor_prime: ID DOT function_call_1
  {sp = 0; helper(); sp += 2; print_parse("factor_prime: ID DOT function_call_1\n\n");  }
          | LP expression RP
  {sp = 0; helper(); sp += 2; print_parse("factor_prime:  LP expression RP\n\n");  }
          | INT
  {sp = 0; helper(); sp += 2; print_parse("factor_prime:  INT\n\n");  }
          | FLOAT
  {sp = 0; helper(); sp += 2; print_parse("factor_prime:  FLOAT\n\n");  }
          | STRING
  {sp = 0; helper(); sp += 2; print_parse("factor_prime: STRING\n\n"); }
          | function_call_2
  {sp = 0; helper(); sp += 2; print_parse("factor_prime: function_call/_2\n\n"); } 
          | ID
  {sp = 0; helper(); sp += 2; print_parse("factor_prime: ID\n\n"); }

constructors: K_PROCESSOR LP processor_params RP
  {
    helper(); 
    print_parse("constructors: K_PROCESSOR LP processor_params RP\n\n"); 
    sp += 2; 
  }
            | K_LINK LP link_params RP
  {
    helper(); 
    print_parse("constructors: K_LINK LP link_params RP\n\n"); 
    sp += 2; 
  }
            | K_MEMORY LP memory_params RP
  {
    helper(); 
    print_parse("constructors: K_MEMORY LP memory_params RP\n\n"); 
    sp += 2; 
  }
            | K_JOB LP job_params RP
  {
    helper(); 
    print_parse("constructors: K_JOB LP job_params RP\n\n"); 
    sp += 2; 
  }
            | K_CLUSTER LP cluster_params RP
  {
    helper(); 
    print_parse("constructors: K_CLUSTER LP cluster_params RP\n\n"); 
    sp += 2; 
  }
            | K_SCHEDULER LP scheduler_params RP
  {
    helper(); 
    print_parse("constructors: K_SCHEDULER LP scheduler_params RP\n\n"); 
    sp += 2; 
  }

processor_params : processor_param_isa processor_param_clock_speed processor_param_l1_memory 
  {
    helper(); 
    print_parse("processor_params : processor_param_isa processor_param_clock_speed processor_param_l1_memory \n\n"); 
    sp += 2; 
  }
              | processor_param_isa processor_param_clock_speed  processor_param_l1_memory COMMA processor_param_l2_memory COMMA processor_param_name
  {
    helper(); 
    print_parse("processor_params : processor_param_isa processor_param_clock_speed  processor_param_l1_memory COMMA processor_param_l2_memory COMMA processor_param_name\n\n"); 
    sp += 2; 
  }
              | processor_param_isa processor_param_clock_speed  processor_param_l1_memory COMMA processor_param_l2_memory 
  {
    helper(); 
    print_parse("processor_params : processor_param_isa processor_param_clock_speed  processor_param_l1_memory COMMA processor_param_l2_memory \n\n"); 
    sp += 2; 
  }
              | processor_param_isa processor_param_clock_speed processor_param_l1_memory COMMA processor_param_name 
  {
    helper(); 
    print_parse("processor_params : processor_param_isa processor_param_clock_speed processor_param_l1_memory COMMA processor_param_name \n\n"); 
    sp += 2; 
  }

link_params : link_param_start_point  link_param_end_point  link_param_bandwidth  link_param_channel_capacity  link_param_name
{
  helper(); 
  print_parse("link_params : link_param_start_point  link_param_end_point  link_param_bandwidth  link_param_channel_capacity  link_param_name \n\n"); 
  sp += 2; 
}

memory_params : memory_param_memory_type  memory_param_mem_size  memory_param_name
  {
    helper(); 
    print_parse("memory_params : memory_param_memory_type  memory_param_mem_size  memory_param_name\n\n"); 
    sp += 2; 
  }

job_params : job_param_job_id  job_param_flops_required  job_param_deadline  job_param_mem_required  job_param_affinity
  {
    helper(); 
    print_parse("job_params : job_param_job_id  job_param_flops_required  job_param_deadline  job_param_mem_required  job_param_affinity\n\n"); 
    sp += 2; 
  }

cluster_params :  cluster_param_processors  cluster_param_topology  cluster_param_link_bandwidth  cluster_param_link_capacity  cluster_param_name
  {
    helper(); 
    print_parse("cluster_params :  cluster_param_processors  cluster_param_topology  cluster_param_link_bandwidth  cluster_param_link_capacity  cluster_param_name\n\n"); 
    sp += 2; 
  }

scheduler_params :  scheduler_param_jobs  scheduler_param_processors scheduler_param_clusters  scheduler_param_algo 
  {
    helper(); 
    print_parse("scheduler_params :  scheduler_param_jobs  scheduler_param_processors scheduler_param_clusters scheduler_param_algo \n\n"); 
    sp += 2; 
  }

processor_param_isa : K_ISA ASSIGN ISA_values
  |ISA_values
  {
    helper(); 
    print_parse("processor_param_isa : K_ISA ASSIGN ISA_values\n\n"); 
    sp += 2; 
  }

ISA_values : K_ARM
  {
    helper(); 
    print_parse("ISA_values : K_ARM\n\n"); 
    sp += 2; 
  }
            | K_AMD
  {
    helper(); 
    print_parse("ISA_values : K_AMD\n\n"); 
     sp += 2; 
    } 
            | K_CDC
  {
    helper(); 
    print_parse("ISA_values : K_CDC\n\n"); 
    sp += 2; 
  }
            | K_MIPS
  {
    helper(); 
    print_parse("ISA_values : K_MIPS\n\n"); 
    sp += 2; 
  }

processor_param_clock_speed :  COMMA K_CLOCK_SPEED COLON expression
  {
    helper(); 
    print_parse("processor_param_clock_speed :  COMMA K_CLOCK_SPEED COLON expression\n\n"); 
    sp += 2; 
  }

processor_param_l1_memory : COMMA K_L1_MEMORY ASSIGN ID
  {
    helper(); 
    print_parse("processor_param_l1_memory : COMMA K_L1_MEMORY ASSIGN ID\n\n"); 
    sp += 2; 
  }
                  | COMMA K_L1_MEMORY ASSIGN K_MEMORY LP memory_params RP
  {
    helper(); 
    print_parse("processor_param_l1_memory : COMMA K_L1_MEMORY ASSIGN K_MEMORY LP memory_params RP\n\n"); 
    sp += 2; 
  }

processor_param_l2_memory :  K_L2_MEMORY ASSIGN ID
  {
    helper(); 
    print_parse("processor_param_l2_memory :  K_L2_MEMORY ASSIGN ID\n\n"); 
    sp += 2; 
  }
                      |  K_L2_MEMORY ASSIGN K_MEMORY LP memory_params RP
  {
    helper(); 
    print_parse("processor_param_l2_memory :  K_L2_MEMORY ASSIGN K_MEMORY LP memory_params RP\n\n"); 
    sp += 2; 
  }
processor_param_name : K_NAME ASSIGN STRING 
  {
    helper(); 
    print_parse("processor_param_name : K_NAME ASSIGN STRING \n\n"); 
    sp += 2; 
  }


link_param_start_point : K_START_POINT ASSIGN STRING 
  {
    helper(); 
    print_parse("link_param_start_point : K_START_POINT ASSIGN STRING \n\n"); 
    sp += 2; 
  }
    | K_START_POINT ASSIGN ID 
  {
    helper(); 
    print_parse("link_param_start_point :K_START_POINT ASSIGN ID \n\n"); 
     sp += 2;}

link_param_end_point : COMMA K_END_POINT ASSIGN STRING
  {
    helper(); 
    print_parse("link_param_end_point : COMMA K_END_POINT ASSIGN STRING\n\n"); 
    sp += 2; 
  }
    | COMMA K_END_POINT ASSIGN ID
  {
    helper(); 
    print_parse("link_param_end_point :COMMA K_END_POINT ASSIGN ID\n\n"); 
    sp += 2;}

link_param_bandwidth : COMMA K_BANDWIDTH ASSIGN expression
  {
    helper(); 
    print_parse("link_param_bandwidth : COMMA K_BANDWIDTH ASSIGN expression\n\n"); 
    sp += 2; 
  }
    | COMMA expression
  {
    helper(); 
    print_parse("link_param_bandwidth: COMMA expression\n\n"); 
    sp += 2;}

link_param_channel_capacity : COMMA K_CHANNEL_CAPACITY ASSIGN expression
  {
    helper(); 
    print_parse("link_param_channel_capacity : COMMA K_CHANNEL_CAPACITY ASSIGN expression\n\n"); 
    sp += 2; 
  }
    | COMMA expression
  {
    helper(); 
    print_parse("link_param_channel_capacity : COMMA expression\n\n"); 
    sp += 2;}

link_param_name : COMMA K_NAME ASSIGN STRING 
  {
    helper(); 
    print_parse("link_param_name : COMMA K_NAME ASSIGN STRING \n\n"); 
    sp += 2; 
  }
    | COMMA K_NAME ASSIGN ID 
  {
    helper(); 
    print_parse("link_param_name : COMMA K_NAME ASSIGN ID \n\n"); 
    sp += 2; 
  }
    | epsilon
  {
    helper(); 
    print_parse("link_param_name :epsilon\n\n"); 
    sp += 2;}


memory_param_memory_type : K_MEMORY_TYPE ASSIGN memory_type_values
  {
    helper(); 
    print_parse("memory_param_memory_type : K_MEMORY_TYPE ASSIGN memory_type_values\n\n"); 
    sp += 2; 
  }
memory_param_mem_size : COMMA K_MEM_SIZE ASSIGN expression
  {
    helper(); 
    print_parse("memory_param_mem_size : COMMA K_MEM_SIZE ASSIGN expression\n\n"); 
    sp += 2; 
  }
memory_param_name : COMMA K_NAME ASSIGN STRING
  {
    helper(); 
    print_parse("memory_param_name : COMMA K_NAME ASSIGN STRING\n\n"); 
    sp += 2; 
  }
    | COMMA K_NAME ASSIGN ID
  {
    helper(); 
    print_parse("memory_param_name : COMMA K_NAME ASSIGN ID\n\n"); 
    sp += 2; 
  }
    | epsilon
  {
    helper(); 
    print_parse("memory_param_name :epsilon\n\n"); 
    sp += 2;}


memory_type_values : K_PRIMARY
  {
    helper(); 
    print_parse("memory_type_values : K_PRIMARY\n\n"); 
    sp += 2; 
  }
    | K_SECONDARY
  {
    helper(); 
    print_parse("memory_type_values :K_SECONDARY\n\n"); 
    sp += 2; 
  } 
    | K_CACHE
  {
    helper(); 
    print_parse("memory_type_values :K_SECONDARYK_CACHE\n\n"); 
    sp += 2; 
  }

job_param_job_id : K_JOB_ID ASSIGN expression
  {
    helper(); 
    print_parse("job_param_job_id : K_JOB_ID ASSIGN expression\n\n"); 
    sp += 2; 
  }
    | COMMA expression
job_param_flops_required : COMMA K_FLOPS_REQUIRED ASSIGN expression
  {
    helper(); 
    print_parse("job_param_flops_required : COMMA K_FLOPS_REQUIRED ASSIGN expression\n\n"); 
    sp += 2; 
  }
    | COMMA expression
job_param_deadline : COMMA K_DEADLINE ASSIGN expression
  {
    helper(); 
    print_parse("job_param_deadline : COMMA K_DEADLINE ASSIGN expression\n\n"); 
    sp += 2; 
  }
    | COMMA expression
job_param_mem_required : COMMA K_MEM_REQUIRED ASSIGN expression
  {
    helper(); 
    print_parse("job_param_mem_required : COMMA K_MEM_REQUIRED ASSIGN expression\n\n"); 
    sp += 2; 
  }
    | COMMA expression
job_param_affinity : COMMA K_AFFINITY ASSIGN array_num
  {
    helper(); 
    print_parse("job_param_affinity : COMMA K_AFFINITY ASSIGN array_num\n\n"); 
    sp += 2; 
  }
    | COMMA K_AFFINITY ASSIGN ID


cluster_param_processors : K_PROCESSORS ASSIGN array_id
  {
    helper(); 
    print_parse("cluster_param_processors : K_PROCESSORS ASSIGN array_id\n\n"); 
    sp += 2; 
  }
    | K_PROCESSORS ASSIGN ID
cluster_param_topology : COMMA K_TOPOLOGY ASSIGN STRING
  {
    helper(); 
    print_parse("cluster_param_topology : COMMA K_TOPOLOGY ASSIGN STRING\n\n"); 
    sp += 2; 
  }
cluster_param_link_bandwidth : COMMA K_LINK_BANDWIDTH ASSIGN expression
  {
    helper(); 
    print_parse("cluster_param_link_bandwidth : COMMA K_LINK_BANDWIDTH ASSIGN expression\n\n"); 
    sp += 2; 
  }
    | COMMA expression
cluster_param_link_capacity : COMMA K_LINK_CAPACITY ASSIGN expression
  {
    helper(); 
    print_parse("cluster_param_link_capacity : COMMA K_LINK_CAPACITY ASSIGN expression\n\n"); 
    sp += 2; 
  }
    | COMMA expression
cluster_param_name : COMMA K_NAME ASSIGN STRING
  {
    helper(); 
    print_parse("cluster_param_name : COMMA K_NAME ASSIGN STRING\n\n"); 
    sp += 2; 
  }
    | epsilon
  {
    helper(); 
    print_parse("cluster_param_name :  epsilon\n\n"); 
    sp += 2; 
  }

scheduler_param_jobs : K_JOBS ASSIGN array_id
  {
    helper(); 
    print_parse("scheduler_param_jobs : K_JOBS ASSIGN array_id\n\n"); 
    sp += 2; 
  }
    | K_JOBS ASSIGN ID
  {
    helper(); 
    print_parse("scheduler_param_jobs :  K_JOBS ASSIGN ID\n\n"); 
    sp += 2; 
  }
scheduler_param_processors : COMMA K_PROCESSORS ASSIGN array_id
  {
    helper(); 
    print_parse("scheduler_param_processors : COMMA K_PROCESSORS ASSIGN array_id\n\n"); 
    sp += 2; 
  }
    | COMMA K_PROCESSORS ASSIGN ID
  {
    helper(); 
    print_parse("scheduler_param_processors :  COMMA K_PROCESSORS ASSIGN ID\n\n"); 
    sp += 2; 
  }
scheduler_param_clusters : COMMA K_CLUSTERS ASSIGN array_id
  {
    helper(); 
    print_parse("scheduler_param_clusters : COMMA K_CLUSTERS ASSIGN array_id\n\n"); 
    sp += 2; 
  }
    | COMMA K_CLUSTERS ASSIGN ID
  {
    helper(); 
    print_parse("scheduler_param_clusters :  COMMA K_CLUSTERS ASSIGN ID\n\n"); 
    sp += 2; 
  }
scheduler_param_algo : COMMA K_ALGO ASSIGN algo_type_values
  {
    helper(); 
    print_parse("scheduler_param_algo : COMMA K_ALGO ASSIGN algo_type_values\n\n"); 
    sp += 2; 
  }

algo_type_values : K_FCFS
  {
    helper(); 
    print_parse("algo_type_values : K_FCFS\n\n"); 
    sp += 2; 
  }
    | K_SJN
  {
    helper(); 
    print_parse("algo_type_values :  K_SJN\n\n"); 
    sp += 2; 
  }
    | K_SRT
  {
    helper(); 
    print_parse("algo_type_values :  K_SRT\n\n"); 
    sp += 2; 
  }
    | K_RRS
  {
    helper(); 
    print_parse("algo_type_values :  K_RRS\n\n"); 
    sp += 2; 
  }

array_num : LS expression array_num_items RS
  {
    helper(); 
    print_parse("array_num : LS expression array_num_items RS\n\n"); 
    sp += 2; 
  }

array_num_items : COMMA expression array_num_items
  {
    helper(); 
    print_parse("array_num_items : COMMA expression array_num_items\n\n"); 
    sp += 2; 
  }
  | epsilon
  {
    helper(); 
    print_parse("array_num_items :  epsilon\n\n"); 
    sp += 2; 
  }

array_id : LS ID array_id_items RS
  {
    helper(); 
    print_parse("array_id : LS ID array_id_items RS\n\n"); 
    sp += 2; 
  }

array_id_items : COMMA ID array_id_items
  {
    helper(); 
    print_parse("array_id_items : COMMA ID array_id_items\n\n"); 
    sp += 2; 
  }
  | epsilon
  {
    helper(); 
    print_parse("array_id_items :  epsilon\n\n"); 
    sp += 2; 
  }

epsilon: 
 
%%
stack<string> st;
int error_count = 0;



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
    //yyin = myfile;

    do {
        fgets(temp, 1024, myfile);
        YY_BUFFER_STATE buffer =  yy_scan_string(temp);
        yyparse();
        yy_delete_buffer(buffer);
        //cout<<endl<<endl<<endl<<temp<<endl<<endl<<endl<<endl<<endl;
    }while (!feof(myfile));

    if(error_count == 0)
      print_parse("yyparse() completed once\n\n\n\n\n\n");
    else
      cout<<"\n Errors found : "<<error_count<<endl<<endl;
    
}

void yyerror(const char *s) {

  if(print_parse_error)
    {
      cout << "\033[1;31m Parse error( " << s << " ) at line : "<< yylineno<<" found \""<<yytext<<"\"\033[0m"<<endl;
        //cout <<"Error found at line : "<<temp<<endl;    
        error_count++;
    }
    //exit(-1);
}
