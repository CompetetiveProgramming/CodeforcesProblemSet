#include <stdio.h>



int weirdalgo(long long n){
    printf("%llu ", n);
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
        printf("%llu ", n);}
}

int main(){
    setvbuf(stdout, NULL, _IONBF, 0);
    setvbuf(stderr, NULL, _IONBF, 0);
    long long i;
    scanf("%llu", &i);
    weirdalgo(i);

}


