%{
  #include<stdio.h>
  #include "token.h"
//  #include "grammar.tab.c"
char* lexeme;


char* token_names[] = {NULL, "K_IF", "K_ELSE", "K_WHILE", "K_DO", "K_ELIF", "K_FOR", "K_BEGIN", "K_END", "K_PROCESSOR", "K_ISA", "K_CLOCK_SPEED", "K_L1_MEMORY", "K_L2_MEMORY", "K_IS_RUNNING", "K_SUBMIT_JOBS", "K_GET_CLOCK_SPEED", "K_RUN", "K_DISCARD_JOB", "K_ARM", "K_AMD", "K_CDC", "K_MIPS", "K_LINK", "K_START_POINT", "K_END_POINT", "K_BANDWIDTH", "K_CHANNEL_CAPACITY", "K_MEMORY", "K_MEMORY_TYPE", "K_MEM_SIZE", "K_GET_AVAILABLE_MEMORY", "K_JOB", "K_JOB_ID", "K_FLOPS_REQUIRED", "K_DEADLINE", "K_MEM_REQUIRED", "K_AFFINITY", "K_GET_MEMORY", "K_CLUSTER", "K_PROCESSORS", "K_TOPOLOGY", "K_LINK_BANDWIDTH", "K_LINK_CAPACITY", "K_NAME", "ID", "INT", "FLOAT", "LP", "RP", "LB", "RB", "STRING", "LS", "RS", "PLUS", "MINUS", "MULT", "DIV", "RELOP", "COMMA", "SEMI", "COLON", "ASSIGN", "L_AND", "L_OR", "L_NOT", "DOT", "EOFILE", "K_PRIMARY", "K_SECONDARY", "K_CACHE", "SPACE", "K_PRINT_STATS", "K_SCHEDULER", "K_JOBS", "K_ALGO", "K_FCFS", "K_SJN", "K_SRT", "K_RRS", "K_WAIT"}	;

%}

%option yylineno
%%
if return K_IF;
else return K_ELSE;
while return K_WHILE;
do return K_DO;
elif return K_ELIF;
for return K_FOR;
begin return K_BEGIN;
end return K_END;
wait return K_WAIT;

int return K_INT;
float return K_FLOAT;
bool return K_BOOL;


Processor return K_PROCESSOR;
isa  return K_ISA;
clock_speed return K_CLOCK_SPEED;
l1_memory return K_L1_MEMORY;
l2_memory return K_L2_MEMORY;
is_running return K_IS_RUNNING;
submit_jobs return K_SUBMIT_JOBS;
get_clock_speed return K_GET_CLOCK_SPEED;
run return K_RUN;
discard_job return K_DISCARD_JOB;
\"ARM\"|\'ARM\' return K_ARM;
\"AMD\"|\'AMD\' return K_AMD;
\"CDC\"|\'CDC\' return K_CDC;
\"MIPS\"|\'MIPS\' return K_MIPS;


Link  return K_LINK;
start_point return K_START_POINT;
end_point return K_END_POINT;
bandwidth return K_BANDWIDTH;
channel_capacity return K_CHANNEL_CAPACITY;

print_stats return K_PRINT_STATS;
scheduler return K_SCHEDULER;
jobs return K_JOBS;
clusters return K_CLUSTERS;
algo return K_ALGO;
\"FCFS\" return K_FCFS;
\"SJN\" return K_SJN;
\"SRT\" return K_SRT;
\"RRS\" return K_RRS;

Memory  return K_MEMORY;
memory_type  return K_MEMORY_TYPE;
mem_size return K_MEM_SIZE;
get_available_memory return K_GET_AVAILABLE_MEMORY;

Job return K_JOB;
job_id return K_JOB_ID;
flops_required return K_FLOPS_REQUIRED;
deadline  return K_DEADLINE;
mem_required return K_MEM_REQUIRED;
affinity return K_AFFINITY;
get_memory return K_GET_MEMORY;

Cluster return K_CLUSTER;
processors return K_PROCESSORS;
topology return K_TOPOLOGY;
link_bandwidth return K_LINK_BANDWIDTH;
link_capacity return K_LINK_CAPACITY;
name return K_NAME;
\'primary\'|\"primary\"   return K_PRIMARY ;
\'secondary\'|\"secondary\" return K_SECONDARY ;
\'cache\'|\"cache\" return K_CACHE ;

print return K_PRINT;
input return K_INPUT;

[a-zA-Z][a-zA-Z0-9_]*  { lexeme=strdup(yytext); return ID; }
[0-9]+ { lexeme=strdup(yytext); return INT; }
[0-9]+(\.[0-9]+)? { lexeme=strdup(yytext); return FLOAT; }
\( return LP;
\) return RP;
\{  return LB;
\} return RB;
\"[^\"]*\"|\'[^\']*\' return STRING;
\[ {printf("\najbszxjszx\n"); return LS;} 
\] return RS;
\+ return PLUS;
\- return MINUS;
\* return MULT;
\/ return DIV;
\<  { lexeme=strdup(yytext); return RELOP; }
\>  { lexeme=strdup(yytext); return RELOP; }
\<=  { printf("<= sadasdasdasdasa\n\n");lexeme=strdup(yytext); return RELOP; }
\>=  { lexeme=strdup(yytext); return RELOP; }
, return COMMA;
\; return SEMI;
==  { lexeme=strdup(yytext); return RELOP; }
=  return ASSIGN ;
\&\& return L_AND;
\|\| return L_OR;
\! return L_NOT;
\. return DOT;
\: return COLON;
[ \t\n]+ ;
. printf("\n\nUnrecognised\n\n");
%%


int yywrap(){
  return 1;
}