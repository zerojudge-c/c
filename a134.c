#include<stdio.h>
#include<stdlib.h>
int main (void)
{
	int i,j,N,n,start;
	long long a;
	int q[10000];
	q[0]=1;
	q[1]=2;
	scanf("%d",&N);
	for(i=0;i<N;i++){
		scanf("%lld",&a);
		printf("%lld = ",a);
		n=2;
		while(a>=q[n-1]){
			q[n]=q[n-1]+q[n-2];
			n++;
		}
		start=0;
		for(j=n-1;j>=0;j--){
			if(a>=q[j]){
				printf("1");
				a-=q[j];
				if (j - 1 >= 0) {
        			printf("0");
    			}
				j--;
				start=1;
			}
			else if(start==1){
				printf("0");
			} 
		}
		printf(" (fib)\n");
	}
	return 0;
}
