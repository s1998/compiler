#include "list.c"

struct treenode 
{
  char* node_name;
  struct treenode* c1;
  struct treenode* c2;
  struct treenode* c3;
};

struct treenode* create_treenode(char* temp)
{
    struct treenode* t;
    t->node_name = malloc(sizeof(temp));
    t->node_name = "";
    strcat(t->node_name, temp);
}