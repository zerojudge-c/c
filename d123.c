 #include<stdio.h>
#include<stdlib.h>
int main (void)
{
	int n,i,j,c=0;
	while(scanf("%d",&n)==1){
		int a[n];
		int m=0,v=1;
		long long sum[n*(n+1)/2],temp;
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		for(i=0;i<n-1;i++){
			if(a[i]>=a[i+1]){
				v=0;
				break;
			}
		}
		for(i=0;i<n;i++){
			for(j=i;j<n;j++){
				sum[m++]=a[i]+a[j];
			}
		}
		for(i=0;i<m;i++){
			for(j=i+1;j<m;j++){
				if(sum[i]>sum[j]){
					temp=sum[i];
					sum[i]=sum[j];
					sum[j]=temp;
				}
			}
		}
		for(i=0;i<m-1;i++){
			if(sum[i]==sum[i+1]){
				v=0;
				break;
			}
		}
		c++;
		if(v==1){
			printf("Case #%d: It is a B2-Sequence.\n",c);
		}
		else if(v==0){
			printf("Case #%d: It is not a B2-Sequence.\n",c);
		}
	}
	return 0;
}
