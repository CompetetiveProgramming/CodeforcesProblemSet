#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>

struct Stack{
    unsigned capacity;
    int top;
    int *a;
};

struct Stack* createStack(unsigned capacity){
	struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
	stack -> capacity = capacity;
	stack -> top = -1;
	stack -> a = (int*)malloc(stack -> capacity * sizeof(struct Stack));
	return stack;
}

int iffull(struct Stack* stack){
	return(stack->top == stack->capacity - 1);
}

int ifempty(struct Stack* stack){
	return(stack -> top == -1);
}

void push(struct Stack* stack, int item){
	if(iffull(stack)){
		return;
	}
	stack -> a[++stack -> top] = item;
}

int pop(struct Stack* stack){
	if(ifempty(stack)){
		return 01;
	}
	return(stack -> a[stack -> top--]);
}

void movedisk(char frompeg, char topeg, int disk){
	printf("Move the disk %d from \'%c\' to \'%c\'\n",
	           disk, frompeg, topeg);
}

void movediscs(struct Stack *src, struct Stack *dest, char s, char d ){
	int p1topdisc = pop(src);
  	int p2topdisc = pop(dest);

  	if(p1topdisc == 01){
  		push(src, p2topdisc);
  		movedisk(d, s, p2topdisc);
  	}
  	else if(p2topdisc == 01){
  		push(dest, p1topdisc);
  		movedisk(d, s, p1topdisc);
  	}
  	else if(p1topdisc > p2topdisc){
  		push(src, p1topdisc);
  		push(src, p2topdisc);
  		movedisk(d, s, p2topdisc);
  	}
  	else{
  		push(dest, p2topdisc);
  		push(dest, p2topdisc);
  		movedisk(d, s, p1topdisc);
  	}
}

void towerofhanoi(int num_of_disks, struct Stack *src, struct Stack *aux, struct Stack *dest){
	int i,total_number_of_moves;
	char s = 'S',d = 'D',a = 'A';
	if(num_of_disks % 2 == 0){
		char temp = d;
		d = a;
		a = temp;
	}
	total_number_of_moves = pow(2, num_of_disks) - 1;
	for(int i = num_of_disks; i >= 1 ; --i){
		push(src, i);
	}
	for(i = 1; i <= total_number_of_moves; ++i){
		if(i % 3 == 1){movediscs(src, dest, s, d);}
		else if(i % 3 == 2){movediscs(src, aux, s, a);}
		else if(i % 3 == 0){movediscs(aux, dest, a, d);}
	}
}

int main(){
	unsigned num_of_disks;
    scanf("%u", &num_of_disks);
	struct Stack *src, *dest, *aux;
	src = (createStack(num_of_disks));
	aux = (createStack(num_of_disks));
	dest = (createStack(num_of_disks));

	towerofhanoi(num_of_disks, src, aux, dest);
	return 0;
}









