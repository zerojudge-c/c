#include<stdio.h>
#include<stdlib.h>
int main (void)
{
	int i,j,n,x;
	while(scanf("%d",&n)!=EOF){
		int a[n];
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		for(i=0;i<n-1;i++){
			a[i]=a[i+1]-a[i];
			if(a[i]<0){
				a[i]*=-1;
			}
		}
		for(j=1;j<n;j++){
			for(i=0;i<n-1;i++){
				x=0;
				if(a[i]==j){
					x=1;
					break;
				}
			}
			if(x==0){
				printf("Not jolly\n");
				break;
			}
			if(j==n-1){
				printf("Jolly\n");
			}
		}
	}
	return 0;
}
