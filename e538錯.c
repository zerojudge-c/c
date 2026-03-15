#include<stdio.h>
#include<stdlib.h>
int main (void)
{
	int n,d,r;
	while(scanf("%d %d %d",&n,&d,&r)==3){
		if(n==0&&d==0&&r==0){
			break;
		}
		int i,money=0,x,y,temp;
		int early[n],late[n];
		for(i=0;i<n;i++){
			scanf("%d",&early[i]);
		}
		for(i=0;i<n;i++){
			scanf("%d",&late[i]);
		}
		for(x=0;x<n-1;x++){
			for(y=x+1;y<n;y++){
				if(early[x]>early[y]){
					temp=early[x];
					early[x]=early[y];
					early[y]=temp;
				}
			}
		}
		for(x=0;x<n-1;x++){
			for(y=x+1;y<n;y++){
				if(late[x]<late[y]){
					temp=late[x];
					late[x]=late[y];
					late[y]=temp;
				}
			}
		}
		for(i=0;i<n;i++){
			if(early[i]+late[i]>d){
				money+=(early[i]+late[i]-d)*r;
			}
		}
		printf("%d\n",money);
	}
	return 0;
} 
