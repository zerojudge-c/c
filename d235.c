#include<stdio.h>
#include<stdlib.h>
int main (void)
{
	int N=1,i;	
	for(i=0;N!=0;i++){
		scanf("%d",&N);
		if(N%11==0 && N!=0){
			printf("%d is a multiple of 11",N);
		}
		else if(N%11!=0 && N!=0){
			printf("%d is not a multiple of 11",N);
		}
	}
	return 0;
}
