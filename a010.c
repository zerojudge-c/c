#include<stdio.h>
#include<stdlib.h>
int z(int n) 
{
    int i,j;
    for(i=2;i<n;i++)
    {
    	j=0;
    	while(n%i==0) 
		{
			n=n/i;
			j+=1;	
		} 
		if(j!=0)
		{
			printf("%d",i);
			printf("^%d ",j);
		}
	}
	if (n > 1)
        printf("* %d", n);
}
int main (void)
{
	int i;
	scanf("%d",&i);
	z(i);
	return 0;
}
