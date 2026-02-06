#include<stdio.h>
#include<stdlib.h>
int main (void)
{
	int T,t,n,i,j,z;
	long long M[105][105];
	scanf("%d",&T);
	for(t=1;t<=T;t++){
		scanf("%d",&n);
		z=1
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				scanf("%lld",&M[i][j]);
				if(M[i][j]<0){
					z=0;
				}
			}
		}
		for(i=0;i<n&&z!=0;i++){
			for(j=0;j<n&&z!=0;j++){
				if(M[i][j]!=M[n-1-i][n-1-j]){
					z=0;
					break;
				}
			}
		}
		if(z!=0){
			printf("Test #%d: Symmetric.",t);
		}
		else{
			printf("Test #%d: Non-symmetric.",t);
		}
	}
	return 0;
}
