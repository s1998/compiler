#include <stdio.h>
#include <vector>
#include <string.h>
#include <cassert>

#define type_int 1
#define type_float 2
#define type_bool 3
#define type_string 4
#define type_link  5
#define type_memory 6 
#define type_job 7
#define type_cluster 8
#define type_scheduler 9
#define type_processor 10

using namespace std;

int debug_on = 1;

void print_on_type(
  int type, 
  void * et);

void set_value(
  void* value1, 
  void* value2, 
  int type1, 
  int type2, 
  int offset);

void print_debug(char* c, ...){

if(debug_on)
 { va_list arg;
   int done;
   va_start (arg, c);
   done = vfprintf (stdout, c, arg);
   va_end (arg);
   }
 }

struct node{
  string name;
  int type ;
  int NumChild;
  bool lval; 
  bool array;

  string lexeme;
  int pointer;
  int dim1, dim2;
  struct node *parent;
  void* value;
  vector<struct node*> children;
};

struct node* createnode()
{
  struct node* n = new node;
  return n;
}

struct terminal{ 
  char *text;
  int type;
  int line;
  int length;
  bool hasValue;
  void* value;
  int scope;
  bool array;
  vector<int>* dim;
}; 

struct symbolTable
{
  int scope;
  vector<terminal> symbols;
};

// struct terminal newTerminal(char* text, )
// {

// }

bool insert_in_st(
  symbolTable& st, 
  char* text, 
  bool hasValue, 
  int scope, 
  vector<int>* dim = NULL, 
  int length = 1)
{
  assert(text != NULL);
  for(auto &x: st.symbols)
  {
    if(!strcmp(text, x.text) && x.scope == scope)
      return false;
  }
  terminal x;
  x.text = (char *)malloc(sizeof(text));
  strcpy(x.text, text);
  bool array = dim == NULL ? false : true;
  x.array = array;
  x.hasValue = hasValue;
  x.scope = scope;
  x.dim = dim;
  x.length = length;
  st.symbols.push_back(x);
  if(x.type == type_int)
    x.value = (int *)malloc(x.length * sizeof(int));
  if(x.type == type_float)
    x.value = (float*)malloc(x.length * sizeof(float));
  if(x.type == type_bool)
    x.value = (bool*)malloc(x.length * sizeof(bool));
  return true;
}

void print_st(symbolTable st)
{
  
  if(debug_on)
  {
    std::cout<<"Symbol table : ";
    for(auto &x : st.symbols)
    {
      cout<<"<< name : "<<x.text;
      cout<<" type : "<<x.type;
      cout<<" s : "<<x.scope;
      cout<<" l : "<<x.length;
      

      if(x.type == 4)
      {
        cout<<"   "<<*(char *)x.value<<" ";
      }
      else if(x.type == 2)
      {
        float ft = *(float *)x.value;
        cout<<"   "<<ft<<" ";
      }
      else if(x.type == 1)
     {
       int it = *(int *)x.value;
       cout<<"   "<<it<<" ";
     }
      else if(x.type == 3)
      {
        bool bt = *(bool *) x.value;
        cout<<" "<<bt<<" ";
      }

    }
  cout<<"ST ends ;\n";}
}


bool look_value(
  symbolTable& st, 
  char* text, 
  int& type, 
  void* value, 
  terminal *t)
{

  assert(text != NULL);
  for(auto x = st.symbols.end(); x--!=st.symbols.begin(); )
  {
    if(!strcmp(text, (*x).text))
    {
      type = (*x).type;
      value = malloc(sizeof((*x).value));
      value = (*x).value;
      *t = *x;
      // cout<<"value is"<<*(int *)value;
      return true;
    }

  }

  
  return false;
}


void update_value(
  symbolTable& st, 
  char* text, 
  int type, 
  void* value, 
  int offset = 0)
{

  assert(text != NULL);
  for(auto x = st.symbols.end(); x--!=st.symbols.begin(); )
  {
    if(!strcmp(text, (*x).text))
    {
      cout<<"\n\n\nvdjwajbsklm;,dasjdasndasdapos\n\n";
      // (*x).value = value;
      
      set_value(&((*x).value), value, (*x).type, type, offset);
        
      print_on_type(type, value);

      cout<<(*x).type;
      cout<<" "<<type;

      // float f = *(float *)value;
      // (*x).value = (int*)malloc(sizeof(int));
      // *(int *)((*x).value) = (int)f;
      // (*x).value = value;
      cout<<"  0000  ";
      cout<<" ";
      print_on_type((*x).type, (*x).value);
      cout<<" ";

      break;
    }

  }
  
}

void copy_node(
  node* n1, 
  node* n2)
{
  n1->name = n2->name;
  n1->type = n2->type;
  n1->NumChild = n2->NumChild;
  n1->lval = n2->lval; 
  n1->array = n2->array;

  n1->lexeme = n2->lexeme;
  n1->pointer = n2->pointer;
  n1->dim1 = n2->dim1;
  n1->dim2 = n2->dim2;
  n1->parent = n2->parent;
  n1->value = n2->value;
  // memcpy(n1->value, n2->value, sizeof(*(n2->value)));
  n1->children = n2->children;
}

int type_coercion(
  int type1, 
  int type2, 
  int arithmetic_check = 1)
{
  if(type1 == 3 && type2 == 3)
    return 3;
  else if(type1 == 1 && type2 == 1)
    return 1;
  else if(
    type1 <=3 && type1 >= 1 &&
    type2 <=3 && type2 >= 1 
     )
    return 2;
  else if(type1 == type2 && !arithmetic_check)
    return type1;

  return -1;

}

void print_on_type(
  int type, 
  void * et){
  if(type == 4)
      cout<<*(char *)et;
    else if(type == 2)
      cout<<*(float *)et;
    else if(type == 1)
      cout<<*(int *)et;
    else if(type == 3)
      cout<<*(bool *)et; 

}



void pop_from_st(
  symbolTable& st, 
  int scope){
  
  int pos = st.symbols.size() -1; 
  while(true)
  {
    cout<<"scope"<<scope;
    if(pos == -1) break;
    auto temp = st.symbols[pos--];
    if(temp.scope == scope)
      {
        cout<<"\ndsdas "<<pos<<" "
        <<temp.scope<<" "<<" "<<scope<<" ";
        print_on_type(temp.type, temp.value);
        st.symbols.pop_back();
        cout<<"\n";
      }
    else {
        cout<<"\ndsdas "<<pos<<" "
        <<temp.scope<<" "<<" "<<scope<<" ";
        print_on_type(temp.type, temp.value);
        cout<<"\n";
        break; 
      }
  }
}

void set_value(
  void* value1, 
  void* value2, 
  int type1, 
  int type2, 
  int offset = 0)
{
  if(type2 == type_bool)
  {
    bool val = *(bool*)value2;
    if(type1 == type_bool)
      *((bool*)value1 + offset) = (bool)val;
    if(type1 == type_int)
      *((int*)value1 + offset) = (int)val;
    if(type1 == type_float)
      *((float*)value1 + offset) = (float)val;
  }
  else if(type2 == type_int)
  {
    int val = *(int*)value2;
    if(type1 == type_bool)
      *((bool*)value1 + offset) = (bool)val;
    if(type1 == type_int)
      *((int*)value1 + offset) = (int)val;
    if(type1 == type_float)
      *((float*)value1+ offset) = (float)val;
  }
  else if(type2 == type_float)
  {
    float val = *(float*)value2;
    if(type1 == type_bool)
      *((bool*)value1 + offset)= (bool)val;
    if(type1 == type_int)
      *((int*)value1 + offset) = (int)val;
    if(type1 == type_float)
      *((float*)value1+ offset) = (float)val;
  }
  else {
    value1 = value2;
  }
  cout<<"\n Setting valures : ";
  print_on_type(type1, value1);
  print_on_type(type2, value2);
  cout<<" Setting valures done \n";

}

