#include<stdio.h>
#include<stdlib.h>
int main (void)
{
	int i;
	for (;scanf("%d",&i)!=EOF;)
	{
		if((i%4==0 &&  i%100!=0)||(i%400==0)) 
	{
		printf("¶|¦~\n");
	} 
	else 
	{
		printf("¥­¦~\n");
	}
	}
	return 0;
}
