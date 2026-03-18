#include<stdio.h>
#include<stdlib.h>
int main (void)
{
	int n,i=0;
	scanf("%d",&n);
	for(;;){
		if(n%3==2){
			n+=1;
			break;
		}	
	}
	for(;;){
		if(n/3>=0){
			i+=n/3;
		}	
	}
	return 0;
}
