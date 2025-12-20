#include<stdio.h>
#include<stdlib.h>
int main (void)
{
	int i,j,a,b,z;
	scanf("%d",&j);
	for(i=0;i<j;i++){
		int sum=0;
		scanf("%d",&a);
		scanf("%d",&b);
		if(a%2==0){
			a++;
		}
		for(z=0;a<=b;z++){
			sum+=a;
			a+=2;
		}
		printf("Case %d: %d",i+1,sum);
	}
	return 0;
}
