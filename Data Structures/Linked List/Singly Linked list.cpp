#include <stdio.h>
#include <stdlib.h>
/* Singly Linked List */
typedef struct list{
  int item;
  struct list *next;
}list;

/* Searching a list */

list *Search(list *l, int x){
  if( l == NULL) return(NULL);
  if(l->item == x){
    return(l);
  }
  else{
    return(Search(l->next, x));
  }
}

/* Insertion */

void InsertToList(list **l, int x){
  list *p;

  p = malloc(sizeof(list));
  p->item = x;
  p->next = *l;
  *l = p;
}

/* Deletion from List */

void DeleteElement(list *l, int x){
    list *node = l;
    if(node == NULL){
	return;	
}
	while((node->next)->data!=x){
	node = node->next;	
	}
list *skip = new list();
node->next = skip->next;
delete skip;
}
