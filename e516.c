#include<stdio.h>
#include<stdlib.h>
int main (void)
{
	int i,a;
	char str[10];
	int x,y,z,temp=0;
	while(1){
		x=1;
		y=2;
		z=3;
		
		scanf("%d",&a);
		if (a==0){
		  break;
		}
		for (i=0;i<a;i++){
			scanf(" %s",&str);
			
			if (str=="north"){
				temp=x;
				x=7-y;
				y=temp;
				z=z;
			}
			else if (str=="south"){
				temp=x;
				x=y;
				y=7-temp;
				z=z;
			}
			else if (str=="east"){
				temp=x;
				x=z;
				y=y;
				z=7-temp;
			}
			else if(str=="west"){
				temp=x;
				x=7-z;
				y=y;
				z=temp;
			}
		}
		printf("%d\n",x);
	}
	
	return 0;
}
