#include <stdio.h>
#include <stdlib.h>

struct Stack{
	int top;
	int* a;
};

typedef struct Stack stack;

stack* create(){
	stack *s = malloc(sizeof(stack));
	s->top = -1;
	s->a = malloc(100*sizeof(int));
}

void push(stack *s, int n){
	s->a[s++->top] = n;
	printf("Pushed %d to stack", n);
}

void pop(stack *s){
	s->top--;
	printf("Popped %d from stack", s->a[s->top]);
}


int main(){
	stack *s = create();
	printf("Enter how many elements to push : ");
	int i;
	scanf("%d", &i);
	for(int j = 0; j < i; j++){
		int l;
		printf("Enter Element number %d : ", j);
		scanf("%d", &l);
		push(s, l);
	}
	while(true){
		printf("Enter 1 if you want to pop");
		int z;
		scanf("%d", &z);
		if(z == 1){
			pop(s);
		}
		break;
	}
}
