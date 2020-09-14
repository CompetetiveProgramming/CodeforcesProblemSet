#include <stdio.h>
#include<stdlib.h>
int main(void) {
	int t,d0,d1;
	long long int k;
	long long int sum,pc;
	long long int *arr=(long long int *)calloc(4,sizeof(long long int));
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{   sum=0;
	    pc=0;
	    scanf("%lld %d %d",&k,&d0,&d1);
	    sum=d0+d1;
	    arr[0]=(2*sum)%10;
	    arr[1]=(2*arr[0])%10;
	    arr[2]=(2*arr[1])%10;
	    arr[3]=(2*arr[2])%10;

	    k=k-2;
	    if(k==0)
	    {
	        if(sum%3==0)
	          printf("YES\n");
	        else
	          printf("NO\n");
	    }
	    else
	    {   sum=sum+(sum%10);
	        k=k-1;
	        if(k/4==0)
	        {
	            for(int j=0;j<k%4;j++)
	            {
	                pc=pc+arr[j];
	            }
	            sum=sum+pc;
	            if(sum%3==0)
	               printf("YES\n");
	             else
	                printf("NO\n");

	        }
	        else
	        {
	            for(int j=0;j<4;j++)
	            {
	                pc=pc+arr[j];
	            }
	            pc=pc*(k/4);
	            for(int j=0;j<k%4;j++)
	            {
	                pc=pc+arr[j];
	            }
	            sum=sum+pc;
	            if(sum%3==0)
	               printf("YES\n");
	            else
	                printf("NO\n");
	        }
	    }

	}
	return 0;
}
