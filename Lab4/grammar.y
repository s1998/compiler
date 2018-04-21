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
extern int yydebug;

int sp = 0;

int print_parse_tree = 1;
int print_parse_error = 1;
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
struct symbolTable sym_tab;
int current_scope;
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
%token K_PRINT 86
%token K_INPUT 87
%union{
        struct node* NT; //non-terminals

        string* s;

        vector<string>* vs;

        vector<int>* dim;


        struct terminal Sval;

        int integer;
}

%type <integer> DType
%type <vs> DList
%type <Sval> ID
%type <Sval> IDEXP
%type <Sval> IDEXP0
%type <NT> RELOPEXP
%type <NT> statements
%type <NT> statement
%type <NT> function_call_1
%type <NT> function_call_2
%type <NT> bool_returning_statements
%type <NT> bool_returning_statement
%type <NT> assign_statements
%type <NT> assign_statement
%type <NT> expression
%type <NT> term_prime
%type <NT> term
%type <NT> factor
%type <NT> factor_prime
%type <dim> BR_DIMLIST
%type <dim> DIM1




%%

statements: statement statements
  {

    print_st(sym_tab);
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
        | K_IF_EXP BLOCK_BODY K_ELSE BLOCK_BODY
  {
    helper(); 
    print_parse("statement:  K_IF LP bool_returning_statements RP LB statements RB K_ELSE LB statements RB\n\n"); 
    sp = 0; 
    current_scope++;



  }
        | K_WHILE_EXP BLOCK_BODY
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
        | K_FOR_EXP BLOCK_BODY
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
      //cout<<x[i]<<"----";
      sym_tab.symbols[sym_tab.symbols.size() - i -1].type = $1;
    }

  }

K_WHILE_EXP : K_WHILE LP bool_returning_statements RP
{
  current_scope++;
  cout<<"dasddsasdsdasd";
  
}

K_IF_EXP : K_IF LP bool_returning_statements RP{

  current_scope++;
}

K_FOR_EXP : K_FOR LP assign_statements SEMI bool_returning_statements SEMI assign_statements RP
{
  current_scope++;
  
}

BLOCK_BODY : LB statements RB
{
  helper(); 
  print_parse("BLOCK_BODY : LB statements RB"); 
  sp += 2;
  cout<<"dawd";
  pop_from_st(sym_tab,current_scope); 
  
  current_scope--;

}

DList : IDEXP COMMA DList
  {
    

    helper(); 
    print_parse("DList : ID K_COMMA DList\n\n"); 
    sp += 2; 
    $3->push_back($1.text);
    $$ = $3;
    bool temp = insert_in_st(sym_tab, $1.text, false, current_scope, $1.dim, $1.length);
    if(debug_on)
      std::cout<<"Insetd "<<temp<<" "<<$1.length<<" "<<endl;
    if(!temp)
      cout<<"Could not insert symbol "<<$1.text<<" in symbol table.";
    }
        | IDEXP
  {
    helper(); 
    print_parse("DList : IDEXP \n\n"); 
    sp += 2; 
    $$ = new vector<string>;
    $$->push_back($1.text);
    bool temp = insert_in_st(sym_tab, $1.text, false, current_scope, $1.dim, $1.length);


    if(debug_on)
      std::cout<<"Inserted "<<temp<<" "<<$1.length<<" "<<endl;
    if(!temp)
      cout<<"Could not insert symbol "<<$1.text<<" in symbol table.";
    
  }

IDEXP : IDEXP0 
  {
    helper(); 
    print_parse("DList : ID \n\n"); 
    sp += 2; 
    $$ = $1;
    $$.length = 1;
    $$.dim = NULL;
  }
  | IDEXP0 BR_DIMLIST
  {
    helper(); 
    print_parse("DList : ID BR_DIMLIST\n\n"); 
    sp += 2; 
    $$ = $1;
    $$.length = 1;
    $$.dim = $2;
    for(int i = 0; i < $2->size(); i++)
      $$.length *= (*($2))[i];
    if(debug_on)
      cout<<"\n---- length : "<<$1.text<<" "<<$$.length<<endl;
  }

IDEXP0 : ID
  {
    helper(); 
    print_parse("DList : ID \n\n"); 
    sp += 2; 
    $$.text = (char*)malloc(sizeof(lexeme));
    strcpy($$.text, lexeme);
    $$.length = 1;
  }

BR_DIMLIST :  DIM1 
      {
        helper(); 
        print_parse("DList : LS K_INT RS\n\n"); 
        sp += 2;
        $$ = $1;
      }
    | DIM1 BR_DIMLIST
     {
        helper(); 
        print_parse("DList : LS K_INT RS\n\n"); 
        sp += 2;
        $2->push_back((*$1)[0]);
        $$ = $2;
      }

    

DIM1 : LS INT RS{

        helper(); 
        print_parse("DList : LS K_INT RS\n\n"); 
        sp += 2;
        $$ = new vector<int>;
        (*$$).push_back(atoi(lexeme));
      }
    | LS ID RS
      {
        helper(); 
        print_parse("DList : LS K_INT RS\n\n"); 
        sp += 2;
        bool temp;
        terminal t;
        temp = look_value(sym_tab, $2.text, $2.type, $2.value, &t);
        if(t.type == type_int){
          $$ = new vector<int>;
          $$->push_back(*(int *)($2.value));
        }else{
            cout << "Dimension of array is not integer type";
        }
      } 



DType : K_INT
  {
    helper(); 
    print_parse("DType : K_INT\n\n"); 
    sp = 0; 
    $$ = type_int;
  }
      | K_FLOAT
  {
    helper(); 
    print_parse("DType : K_FLOAT\n\n"); 
    sp = 0; 
    $$ = type_float;
  }
      | K_BOOL
  {
    helper(); 
    print_parse("DType : K_BOOL\n\n"); 
    sp = 0; 
    $$ = type_bool;
  }
      | K_PROCESSOR
  {
    helper(); 
    print_parse("DType : K_PROCESSOR\n\n"); 
    sp = 0; 
    $$ = type_processor;
  }
      | K_LINK
  {
    helper(); 
    print_parse("DType : K_LINK\n\n"); 
    sp = 0; 
    $$ = type_link;
  }
      | K_SCHEDULER
  {
    helper(); 
    print_parse("DType : K_SCHEDULER\n\n"); 
    sp = 0; 
    $$ = type_scheduler;
  }
      | K_MEMORY
  {
    helper(); 
    print_parse("DType : K_MEMORY\n\n"); 
    sp = 0; 
    $$ = type_memory;
  }
      | K_CLUSTER
  {
    helper(); 
    print_parse("DType : K_CLUSTER\n\n"); 
    sp = 0; 
    $$ = type_cluster;
  }
      | K_JOB
  {
    helper(); 
    print_parse("DType : K_JOB\n\n"); 
    sp = 0; 
    $$ = type_job;
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

function_call_2: K_PRINT LP expression RP
  {
    helper(); 
    print_parse("function_call_2:  K_PRINT LP expression RP\n\n"); 
    
    cout<<"\n\n********print called\n";
    //cout<<"dasd";


    if($3->type == 4)
      cout<<*(char *)$3->value;
    else if($3->type == 2)
      cout<<*(float *)$3->value;
    else if($3->type == 1)
      cout<<*(int *)$3->value;
    else if($3->type == 3)
      cout<<*(bool *)$3->value; 
     
    sp += 2; 
  }
    | K_INPUT LP ID RP
  {
    helper(); 
    print_parse("function_call_2:  K_INPUT LP RP\n\n"); 
    sp += 2;

  }

bool_returning_statements: bool_returning_statement L_AND bool_returning_statements
  {
    helper(); 
    print_parse("bool_returning_statements: bool_returning_statement L_AND bool_returning_statements\n\n"); 
    sp += 2; 
    $$ = new node;
    copy_node($$, $1);
    bool bt = *(bool *)($1->value) && *(bool *)($3->value);
    *(bool*)($$->value) = bt;
  }
        | bool_returning_statement  L_OR bool_returning_statements
  {
    helper(); 
    print_parse("bool_returning_statements:  bool_returning_statement  L_OR bool_returning_statements\n\n"); 
    sp += 2; 
    $$ = new node;
    copy_node($$, $1);
    bool bt = *(bool *)($1->value) || *(bool *)($3->value);
    *(bool*)($$->value) = bt;
  }
                       | L_NOT bool_returning_statements
  {
    helper(); 
    print_parse("bool_returning_statements:  L_NOT bool_returning_statements\n\n"); 
    sp += 2; 
    $$ = new node;
    copy_node($$, $2);
    bool bt = !*(bool *)($$->value);
    *(bool*)($$->value) = bt;
    
  }
                       | bool_returning_statement
  {
    helper(); 
    print_parse("bool_returning_statements:  bool_returning_statement\n\n"); 
    sp += 2;

    $$ = new node;
    copy_node($$, $1);
     
  }

bool_returning_statement: expression
  {
    helper(); 
    print_parse("bool_returning_statement: expression\n\n"); 
    sp += 2;
    $$ = new node;
    copy_node($$, $1);
    bool bt = *(bool *)$$->value;
    if(bt) {bt=true;$$->value=&bt;}
    else {bt=false;$$->value=&bt;}
    
    $$->type = type_bool;


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

assign_statement: IDEXP ASSIGN expression
  {
    helper(); 
    print_parse("assign_statement: IDEXP ASSIGN expression\n\n"); 
    sp += 2; 
    bool temp;
    terminal t;
    temp = look_value(sym_tab, $1.text, $1.type, $1.value, &t);
    if(!temp){  
      cout<<"Variable "<<$1.text<<" not already declared. Missing from symbol  table."<<endl;
    }
    else if(type_coercion($1.type, $3->type, 0) == -1){
      cout<<"Type mismatch at lineno : "<<yylineno<<".\nOperands of type : "<<$1.type<<" "<<$3->type<<$1.text<<endl;
    }
    else{

          if(t.dim != NULL){

            if($1.dim != NULL && $1.dim->size() == t.dim->size()){
              int offset=0;
              int temp =1, s = t.dim->size();
              for(int i = 0;i < t.dim->size();i++){
                offset += temp* (*$1.dim)[s-i-1];
                temp *= (*t.dim)[s-i-1];
              }
              cout << "Array offset : " << offset << endl;
              update_value(sym_tab,$1.text,$3->type,$3->value, offset);
            }else{

              cout << " Dimensions don't match with declared dimensions." << endl;
              
            }

          }else{

          cout<<"\n11111 :::    ";
          print_on_type($3->type,$3->value);
          update_value(sym_tab,$1.text,$3->type,$3->value);
          // print_on_type(t.type,t.value);
          // set_value(t.value, $3->value, t.type, $3->type);
          // cout<<"dasds : "<<t.text;
          //print_on_type(t.type,t.value);

        }
    }
  }


expression: term_prime RELOPEXP expression
  {
    helper(); 
    print_parse("expression: term_prime RELOPEXP expression\n\n"); 
    sp += 2; 
    $$ = new node;
    copy_node($$, $1);
    if(($$->type = type_coercion($$->type, $3->type)) == -1)
      cout<<"Types mimatched : "<<$$->type<<" "<<$3->type<<" at lineno : "<<yylineno;
    $$->type = type_bool;
    if(!strcmp((char *)$2->value, "<="))
      {
        int a = *(int *)$1->value;
        int b = *(int *)$3->value;
        cout<<a<<" "<<b;
        *(bool*)($$->value) = ( a <= b );}
    else if(!strcmp((char *)$2->value, "=="));
      //*(bool*)($$->value) = ($1->value == $3->value);

  }
        | term_prime
  {
    helper(); 
    print_parse("expression:  term_prime\n\n"); 
    sp += 2; 
    $$ = new node;
    copy_node($$, $1);

        // cout<<"dwadawdwd";
        // print_on_type($$->type,$$->value);

  }

RELOPEXP : RELOP
  {
    $$ = new node;
    $$->value = malloc(sizeof(lexeme));
    strcpy((char *)$$->value, lexeme);
  }
term_prime: term PLUS term_prime
  {
    helper(); 
    print_parse("term_prime: term PLUS term_prime\n\n"); 
    sp += 2; 
    $$ = new node;
    copy_node($$, $1);
    //cout<<"Daddasd :"<<$1->type<<"  "<<$3->type;
    //cout<<"$$->type "<<$$->type;

    if(($$->type = type_coercion($1->type, $3->type, 0)) > 4)
      cout<<"Types mimatched : "<<$$->type<<" "<<$3->type<<" at lineno : "<<yylineno;

    if(debug_on)
     cout<<"line 658 : "<<$$->type<<" "<<$1->type<<" "<<$3->type<<"\n";

    if($$->type == 4)
      $$->value = new string(strcat((char*)$1->value, (char*)$3->value));
    else 
    {
    if($$->type == 2)
      {
        float ft = 0 ;
        if($1->type == type_int )
          ft += *(int *)$1->value;

        else if($1->type == type_bool )
          ft += *(bool *)$1->value;

        else if($1->type == type_float )
          ft += *(float *)$1->value;


        if($3->type == type_int )
          ft += *(int *)$3->value;

        else if($3->type == type_bool )
          ft += *(bool *)$3->value;

        else if($3->type == type_float )
          ft += *(float *)$3->value;

        *(float *)$$->value = ft;
      }
    else if($$->type == 1)
     {
       int it = *(int *)$1->value + *(int*)$3->value;
       *(int *)$$->value = it;
     }
    else if($$->type == 3)
      {

        bool bt = *(bool*)$1->value + *(bool*)$3->value;
        *(bool*)$$->value = bt;
      }
    }
    if(debug_on)
      {
        cout<<"Doing addition, type : "<<$$->type;
        print_on_type($1->type, $1->value); cout<<" ";
        print_on_type($3->type, $3->value); cout<<" ";
        print_on_type($$->type, $$->value); cout<<" ";
        cout<<endl;
      }

  }
        | term MINUS term_prime
  {
    helper(); 
    print_parse("term_prime:  term MINUS term_prime\n\n"); 
    sp += 2; 
    $$ = new node;
    copy_node($$, $1);
    if(($$->type = type_coercion($$->type, $3->type)) == -1)
      cout<<"Types mimatched : "<<$$->type<<" "<<$3->type<<" at lineno : "<<yylineno;
   
    if($$->type == 2)
      {
        float ft = *(float *)$1->value - *(float *)$3->value;
        *(float *)$$->value = ft;
      }
    else if($$->type == 1)
     {
       int it = *(int *)$1->value - *(int*)$3->value;
       *(int *)$$->value = it;
     }
    else if($$->type == 3)
      {
        bool bt = *(bool*)$1->value - *(bool*)$3->value;
        *(bool*)$$->value = bt;
      }
  }
        | term
  {
    helper(); 
    print_parse("term_prime:  term\n\n"); 
    sp += 2; 
    $$ = new node;
    copy_node($$, $1);
  }

term: factor MULT term
  {
    helper(); 
    print_parse("term: factor MULT term\n\n"); 
    sp += 2; 
    $$ = new node;
    copy_node($$, $1);
    if(($$->type = type_coercion($$->type, $3->type)) == -1)
      cout<<"Types mimatched : "<<$$->type<<" "<<$3->type<<" at lineno : "<<yylineno;

    if($$->type == 2)
      {
        float ft = 1;
        if($1->type == type_int )
          ft *= *(int *)$1->value;

        else if($1->type == type_bool )
          ft *= *(bool *)$1->value;

        else if($1->type == type_float )
          ft *= *(float *)$1->value;


        if($3->type == type_int )
          ft *= *(int *)$3->value;

        else if($3->type == type_bool )
          ft *= *(bool *)$3->value;

        else if($3->type == type_float )
          ft *= *(float *)$3->value;

        *(float *)$$->value = ft;
      }
    else if($$->type == 1)
     {
       int it = *(int *)$1->value * *(int*)$3->value;
       *(int *)$$->value = it;
     }
    else if($$->type == 3)
      {

        bool bt = *(bool*)$1->value * *(bool*)$3->value;
        *(bool*)$$->value = bt;
      }
      if(debug_on)
      {
        cout<<"Doing multiplication, type : "<<$$->type;
        print_on_type($1->type, $1->value); cout<<" ";
        print_on_type($3->type, $3->value); cout<<" ";
        print_on_type($$->type, $$->value); cout<<" ";
        cout<<endl;
      }
  }
  | factor DIV term
  {
    helper(); 
    print_parse("term:  factor DIV term\n\n"); 
    sp += 2; 
    $$ = new node;
    copy_node($$, $1);
    if(($$->type = type_coercion($$->type, $3->type)) == -1)
      cout<<"Types mimatched : "<<$$->type<<" "<<$3->type<<" at lineno : "<<yylineno;
    if($$->type == 2)
      {
        float ft = 1 ;

        cout<<" wdsdas :: "<<*(int *)$1->value;
        if($1->type == type_int )
          ft *= *(int *)$1->value;

        else if($1->type == type_bool )
          ft *= *(bool *)$1->value;

        else if($1->type == type_float )
          ft *= *(float *)$1->value;

        cout<<"\n1: "<<ft;

        if($3->type == type_int )
          ft /= *(int *)$3->value;

        else if($3->type == type_bool )
          ft /= *(bool *)$3->value;

        else if($3->type == type_float )
          ft /= *(float *)$3->value;

        cout<<"\n2: "<<ft;

        *(float *)$$->value = ft;
      }
    else if($$->type == 1)
     {
       int it = *(int *)$1->value / *(int*)$3->value;
       *(int *)$$->value = it;
     }
    else if($$->type == 3)
      {

        bool bt = *(bool*)$1->value / *(bool*)$3->value;
        *(bool*)$$->value = bt;
      }

      if(debug_on)
      {
        cout<<"Doing division, type : "<<$$->type<<" "<<$1->type<<" "<<$3->type;
        // cout<<" "<<*(int *)$1->value<<" ";
        print_on_type($1->type, $1->value); cout<<" ";
        print_on_type($3->type, $3->value); cout<<" ";
        print_on_type($$->type, $$->value); cout<<" ";
        cout<<endl;
      }
  }
  | factor
  {
    helper(); 
    print_parse("term:  factor\n\n"); 
    sp += 2; 
    $$ = new node;
    copy_node($$, $1);
  }

factor: factor_prime
  {
    helper(); 
    print_parse("factor: factor_prime\n\n"); 
    sp += 2; 
    $$ = new node;
    copy_node($$, $1);
  }

factor_prime: ID DOT function_call_1
  {
    sp = 0; 
    helper(); 
    sp += 2; print_parse("factor_prime: ID DOT function_call_1\n\n");  
  }
          | LP expression RP
  {
    sp = 0; 
    helper(); 
    sp += 2; print_parse("factor_prime:  LP expression RP\n\n");  
    $$ = new node;
    $$->type = $2->type;
    if(debug_on)
      cout<<endl<<$2->value<<endl;
    $$->value = malloc(sizeof($2->value));
    $$->value = $2->value;
  }
          | INT
  {
    sp = 0; 
    helper(); 
    sp += 2; print_parse("factor_prime:  INT\n\n");  
    $$ = new node;
    $$->type = type_int;
    if(debug_on)
      cout<<lexeme<<endl;
    $$->value = new int(atoi(lexeme));
  }
          | FLOAT
  {
    sp = 0; 
    helper(); 
    sp += 2; print_parse("factor_prime:  FLOAT\n\n");  
    $$ = new node;
    $$->type = type_float;
    if(debug_on)
      cout<<lexeme<<endl;
    $$->value = new float(atof(lexeme));
  }
          | STRING
  {
    sp = 0; 
    helper(); 
    sp += 2; print_parse("factor_prime: STRING\n\n"); 
    $$ = new node;
    $$->type = type_string;
    if(debug_on)
      cout<<lexeme<<endl;
    $$->value = new string(lexeme);
  }
          | function_call_2
  {
    sp = 0; 
    helper(); 
    sp += 2; print_parse("factor_prime: function_call/_2\n\n"); }

          | IDEXP
  {
    sp = 0; 
    helper(); 
    sp += 2; print_parse("factor_prime: ID\n\n"); 
    $$ = new node;
    bool temp;
    //cout<<$1.text<<endl;
    terminal t;
    temp = look_value(sym_tab, $1.text, $$->type, $$->value, &t);
    //cout<<t.value;
    if(!temp)
      cout<<"Use of non-declared variable : "<<$1.text<<"."<<endl;
    else
      $$->value = t.value;
    if(debug_on)
      cout<<"Found value : "<<*(int *)t.value<<" for "<<lexeme<<".\n";
      //return -1;
  }

epsilon: 
 
%%
stack<string> st;
int error_count = 0;



int main(int argc, char *argv[]) {
    sym_tab.scope = 0;
    current_scope = 0;
    yydebug = 0;

    if (argc < 2) {
        cout <<"Usage: <command> filename"<<endl;
        return 1;
    }
    if (argc == 3)
      debug_on = atoi(argv[2]);
      
    FILE *myfile = fopen(argv[1], "r");
    if (!myfile) {
        cout << "I can't open "<<argv[1]<< endl;
        return -1;
    }
    yyin = myfile;
    yyparse();
/*
    do {
        fgets(temp, 1024, myfile);
        YY_BUFFER_STATE buffer =  yy_scan_string(temp);
        yyparse();
        yy_delete_buffer(buffer);
        //cout<<endl<<endl<<endl<<temp<<endl<<endl<<endl<<endl<<endl;
    }while (!feof(myfile));
    */

    print_st(sym_tab);
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
