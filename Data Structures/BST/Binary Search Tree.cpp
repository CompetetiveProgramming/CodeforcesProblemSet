#include <stdio.h>
#include <stdlib.h>

struct tree{
  int main_data;
  struct tree* left;
  struct tree* right;
};

typedef struct tree Tree;

/* Searching a binary tree */
Tree* search(Tree* t, int x){
  if(t == NULL){return(NULL);}
  else if(t == x){return t;}
  else if(x > t -> main_data){
    return search(t -> left, x);
  }
  else{
    return search(t -> right, x);
  }
}

/* Insert to binary tree */
void Insert(Tree **t, int x,){
  int* p;

  if(*t == NULL){
    p = malloc(sizeof(Tree));
    p -> main_data = x;
    p -> right = NULL;
    *t = p;
    return;
  }
  if(x < (*t) -> main_data){
    return(Insert(&((*t) -> left)), x);
  }
  else{
    return(Insert(&((*t) -> right)), x);
  }
}
