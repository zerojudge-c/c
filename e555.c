#include<stdio.h>
#include<stdlib.h>
int main (void)
{
	int S,w;
	long long D;
	while(scanf("%d %lld",&S,&D)==2){
		w=S;
		while(D>w){
			D-=w;
			w++;
		}
		printf("%d\n",w);
	}
	
	return 0;
}
