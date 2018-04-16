statements: statement statements
         | epsilon

statement: assign_statement
        | K_IF LP bool_returning_statements RP LB statements RB K_ELSE LB statements RB
        | K_WHILE LP bool_returning_statements RP LB statements RB
        | K_BEGIN statements K_END
        | K_FOR LP assign_statements SEMI bool_returning_statements SEMI bool_returning_statements RP LB statements RB
        | ID DOT function_call_1
        | function_call_2

function_call_1 : 
          K_IS_RUNNING LP RP
        | K_SUBMIT_JOBS LP INT RP
        | K_SUBMIT_JOBS LP array_num RP
        | K_GET_CLOCK_SPEED LP RP
        | K_GET_AVAILABLE_MEMORY LP RP
        | K_GET_MEMORY LP RP

function_call_2 : 
          K_RUN LP ID RP
        | K_RUN LP array_id RP
        | K_DISCARD_JOB LP INT RP

bool_returning_statements: bool_returning_statement L_AND bool_returning_statements
                       | bool_returning_statement  L_OR bool_returning_statements
                       | L_NOT bool_returning_statements
                       | LP bool_rturning_statements RP
                       | bool_returning_statement

bool_returning_statement: expression

assign_statements: assign_statement COMMA assign_statements
               | assign_statement
               | epsilon

assign_statement: ID ASSIGN expression
              | ID LS INT RS ASSIGN expression
              | ID ASSIGN constructors
              | ID LS INT RS ASSIGN constructors

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

constructors: K_PROCESSOR LP processor_params RP
            | K_LINK LP link_params RP
            | K_MEMORY LP memory_params RP
            | K_JOB LP job_params RP
            | K_CLUSTER LP cluster_params RP

processor_params :
              processor_param_isa 
              processor_param_clock_speed  
              processor_param_l1_memory 
              processor_param_l2_memory 

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

processor_param_isa : K_ISA ASSIGN ISA_values
ISA_values : K_ARM
            | K_AMD
            | K_CDC
            | K_MIPS

processor_param_clock_speed :  COMMA K_CLOCK_SPEED COLON expression

processor_param_l1_memory : COMMA K_L1_MEMORY ASSIGN ID
                      | COMMA K_L1_MEMORY ASSIGN K_MEMORY LP memory_params RP

processor_param_l2_memory : COMMA K_L2_MEMORY ASSIGN ID
                      | COMMA K_L2_MEMORY ASSIGN K_MEMORY LP memory_params RP
                      | epsilon

link_param_start_point : 
    K_START_POINT ASSIGN STRING 
link_param_end_point : 
    COMMA K_END_POINT ASSIGN STRING
link_param_bandwidth : 
    COMMA K_BANDWIDTH ASSIGN expression
link_param_channel_capacity : 
    COMMA K_CHANNEL_CAPACITY ASSIGN expression
link_param_name : 
    COMMA K_NAME ASSIGN STRING 
    | epsilon

memory_param_memory_type : 
    K_MEMORY_TYPE ASSIGN memory_type_values
memory_param_mem_size : 
    COMMA K_MEM_SIZE ASSIGN expression
memory_param_name : 
    COMMA K_NAME ASSIGN STRING
    | epsilon

memory_type_values :
    K_PRIMARY
    | K_SECONDARY
    | K_CACHE

job_param_job_id : 
    K_JOB_ID ASSIGN expression
job_param_flops_required : 
    COMMA K_FLOPS_REQUIRED ASSIGN expression
job_param_deadline : 
    COMMA K_DEADLINE ASSIGN expression
    | COMMA K_DEADLINE ASSIGN expression
job_param_mem_required : 
    COMMA K_MEM_REQUIRED ASSIGN expression
job_param_affinity : 
    COMMA K_AFFINITY ASSIGN array_num

array_num : 
  LS expression array_num_items RS
  | LS expression array_num_items RS

array_num_items : 
  COMMA expression array_num_items
  | COMMA expression array_num_items
  | epsilon

cluster_param_processors : 
    K_PROCESSORS ASSIGN array_id
cluster_param_topology : 
    COMMA K_TOPOLOGY ASSIGN STRING
cluster_param_link_bandwidth : 
    COMMA K_LINK_BANDWIDTH ASSIGN expression
cluster_param_link_capacity : 
    COMMA K_LINK_CAPACITY ASSIGN expression
cluster_param_name : 
    COMMA K_NAME ASSIGN STRING
    | epsilon

array_id : 
  LS ID array_id_items RS

array_id_items : 
  COMMA ID array_id_items
  | epsilon

epsilon: 

