#include <stdio.h>
#include <stdlib.h>


int sumarr(int *arr,int k,int j);

int main(){
	int n;
	int q;
	int k;
	int j;
	scanf("%d", &n); scanf("%d", &q);
	int *arr;
	arr = (int*)malloc(n * sizeof(int));
	int i;
	while(i <= n){
		scanf("%d", arr + i);
		i++;

	}
	int sum = 0;
	for(int l = 0; l <= q; l++){
		scanf("%d", &k); scanf("%d", &j);
		sum = sum + sumarr(*arr, k, j);
	}
	printf('%d', sum);


}

int sumarr(int *arr, int k, int j){
	int sum = 0;
	while(k <= j){
		sum = sum + (arr + k);
		k++;
	}
	return sum;
}
