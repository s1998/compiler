#include <stdio.h>
#include <vector>
#include <string.h>

using namespace std;

struct node{
  string name;
  int type ;
  int NumChild;
  bool lval; 
  int array;

  string lexeme;
  int pointer;
  int dim1, dim2;
  struct node *parent;
  vector<struct node*> children;
};

struct node* createnode()
{
  struct node* n = new node;
  return n;
}

struct symbolTable
{
  vector<node>;
}