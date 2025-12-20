#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main (void)
{
	int a,b,c,x1,x2,z,q;
	scanf("%d %d %d",&a,&b,&c);
	q=(b*b-4*a*c);
	x1=(-b+sqrt(q))/(2*a);
	x2=(-b-sqrt(q))/(2*a);
	if(x1>x2)
	{
		printf("Two different roots x1=%d , x2=%d",x1,x2);		
	}
	else if(x1<x2)
	{
		z=x1;
		x1=x2;
		x2=z;
		printf("Two different roots x1=%d , x2=%d",x1,x2);	
	}
	else if(x1==x2)
		printf("Two same roots x=0");
	else
		printf("No real root");
	return 0;
}
