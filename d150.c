#include<stdio.h>
#include<stdlib.h>
int main (void)
{
	int t,n,i,j;
	while(scanf("%d",&t)==1){
		for(i=0;i<t;i++){
			while(scanf("%d",&n)==1){
				int p[n];
				for(j=0;j<n;j++){
					scanf("%d",&p[j]);
					
				}
				int a,b,temp;
				for(a=0;a<n-1;a++){
					for(b=a+1;b<n;b++){
						if(p[a]<p[b]){
							temp=p[a];
							p[a]=p[b];
							p[b]=temp;
						}
					}
				}
				int x,total=0;
				for(x=2;x<n;x+=3){
					total+=p[x];
				}
				printf("%d",total);
			}
		}
	}
	return 0;
}
