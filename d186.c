#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main (void)
{
	int a,b,min,max,temp;
	while(scanf("%d %d",&a,&b)==2){
		if(a==0&&b==0){
			break;
		}
		if(a>b){
			temp=a;
			a=b;
			b=temp;
		}
		min=(int)sqrt(a);
		if(min*min<a) min++;
		max=(int)sqrt(b);
		printf("%d\n",max-min+1);
	}
	return 0;
}
