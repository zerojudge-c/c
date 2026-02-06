#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int add(char s[])
{
	int x,j,sum=0,i=0;
	for(x=0;s[x]!='\0';x++){
	}
	for(j=x-1;j>=0;j--){
		if(s[j]=='1'){
			sum+=pow(2,i);		
		}
		i++;
	}
	return sum;
}
int main (void)
{
	int N,i,j;
	char s1[31],s2[31];
	scanf("%d",&N);
	for(i=0;i<N;i++){
		scanf("%s",s1);
		scanf("%s",s2);
		int x,y,temp;
		x=add(s1);
		y=add(s2);
		if(x<y){
			temp=x;
			x=y;
			y=temp;
		}
		int a;
		while(y!=0){
			a=x%y;
			x=y;
			y=a;
		}
		if(x>1){
			printf("Pair #%d: All you need is love!\n",i+1);
		}
		else{
			printf("Pair #%d: Love is not all you need!\n",i+1);
		}
		
	}
	return 0;
}
