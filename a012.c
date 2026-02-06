#include<stdio.h>
#include<stdlib.h>
int main (void)
{
	long long i,j;
	while(scanf("%lld %lld",&i,&j)==2){
		if(i<j){
			printf("%lld",j-i);
		}
		else{
			printf("%lld",i-j);
		}
	}
	return 0;
}
