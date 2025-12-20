#include<stdio.h>
#include<stdlib.h>
int main (void)
{
	int x,y,i,j,a,b,z,temp;
	while (scanf("%d %d",&i,&j)== 2)
	{
		x=i;
		y=j;
		int max=0;
    	if(i > j) 
		{
    		int temp = i;
   			i = j;
    		j = temp;
    	}
    for(z=i;z<=j;z++)
	{
		a=z;
		b=1;
    	while(a!=1)
	{
		if(a%2==1)
			a=a*3+1;
		else
			a=a/2;
		b+=1;
	}
	if(b>max)
		max=b;
	}
	printf("%d %d %d\n",x,y,max);
	}
	return 0;
}
