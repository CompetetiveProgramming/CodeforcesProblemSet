#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


int weirdalgo(int n){
    printf("%d ", n);
	while(n != 1 ){
    if(n % 2 == 0){
		n = n/2;
		//weirdalgo(n);
	}
	else if(n % 2 != 0){
		n = n*3;
		n = n + 1;
		//weirdalgo(n);
	}
	printf("%d ", n);}
}

int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int i;
	scanf("%d", &i);
	weirdalgo(i);

}


