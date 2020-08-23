#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <bits/stdc++.h>


int main(){
	long long i;
	scanf("%llu", &i);
	long long arr[i];
	for(long long j = 0; j < i; j++){
		scanf("%llu", &arr[j]);
	}
    long long turn = 0;
	for(long long k = 1; k < i; k++){
    	while(arr[k - 1] > arr[k]){
    		arr[k] +=1;
    		turn += 1;
    	}
    }
	printf("%llu", turn);

}
