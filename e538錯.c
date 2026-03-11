#include<stdio.h>
#include<stdlib.h>
int main (void)
{
	int n,d,r;
	while(scanf("%d %d %d",n,d,r)==3){
		if(n==d==r==0){
			break;
		}
		int i,j;
		int a[n][2]; 
		for(i=0;i<n;i++){
			for(j=0;j<2;j++){
				scanf("%d",a[i][j]);
				if(a[i][j]+a[i][j]>d){
					printf("%d",(a[i][j]+a[i][j]-d)*r);
				}
			}
		}
		
	}
	return 0;
} 
