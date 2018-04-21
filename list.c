#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void debug()
{
  int temp;
  scanf("%d", &temp);
}

struct st_entry{ 
  char* name;
  int type;
  char* attribute;
  struct st_entry* next;
};

typedef struct st_entry st_entry;

typedef struct{
  st_entry* head;
}st;

st* create_table()
{
  st* table = (st*)malloc(sizeof(st));
  table->head = NULL;
  return table;
}

st_entry* check(st* st_, char* name)
{
  st_entry* node = st_->head;
  while(node)
  {
    if(!strcmp(node->name, name))
      return node;
    node = node->next;
  }
  return NULL;
}

st_entry* create_node(char* name, 
  int type, 
  char* attribute)
{
  // debug();
  st_entry* node = (st_entry*)malloc(sizeof(st_entry));
  // debug();
  node->name = (char*) malloc(sizeof(char) * strlen(name));
  strcpy(node->name, name);
  // debug();
  node->type = type;
  // debug();
  node->attribute = (char*) malloc(sizeof(char) * strlen(attribute));
  strcpy(node->attribute, attribute);
  // debug();
  return node;
}

void insert(st* st_,
 char* name, 
 int type, 
 char* attribute)
{
  if(check(st_, name))
    return;
  st_entry* node = create_node(
      name,
      type,
      attribute);
  // debug();
  if(st_->head == NULL)
  {
    // debug();
    st_->head = node;
    // debug();
    return;
  }
  node->next = st_->head;
  st_->head = node;
}

void read_table(st* st_)
{
  st_entry* node = st_->head;
  while(node)
  {
    if(node->type == NUM)
      printf("_%s %d \n", node->name, node->type);
    else
      printf("%s %d \n", node->name, node->type);
    node = node->next;
  }
}