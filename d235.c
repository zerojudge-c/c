#include<stdio.h>
#include<stdlib.h>
int main (void)
{
	int i,j;
	char a[1000];
	while(scanf("%s",a)==1&&!(a[0]=='0'&&a[1]=='\0')){
		int x=0,y=0,temp;
		for(i=0;a[i]!='\0';i++){
			if(i%2==0){
				x+=a[i]-'0';
			}
			else{
				y+=a[i]-'0';
			}
		}
		if(x<y){
			temp=x;
			x=y;
			y=temp;
		}
		if((x-y)%11==0){
			printf("%s is a multiple of 11.\n",a);
		}
		else{
			printf("%s is not a multiple of 11.\n",a);
		}
	}
	return 0;
}
