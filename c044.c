#include<stdio.h>
#include<stdlib.h>
int main (void)
{
	int n,i,j;
	while(scanf("%d",&n)==1){
		char a;
		for(i=0;i<n;i++){
			scanf("%s",a);
		}
		int y=65,z=97,c=0;
		int x[26];
		for(j=0;a[j]!='\0';j++){
			if((a[j]>=97&&a[j]<=122)){
				a[j]-=32;
			}
			if(a[j]>=65&&a[j]<=90){
				if(a[j]==y++){
					x[c++]+=1;
				}
			}
		}
	}
	for(i=0;i<26;i++){
		printf("%c %d",a[i],x[i]);
	}
	return 0;
}
