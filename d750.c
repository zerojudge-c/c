#include <stdio.h>
#include <stdlib.h>
int main()
{
	int M,N,i,j;
	scanf("%d %d",&N,&M);
	int sum[N],a[N];
	for(i=0;i<N;i++){
		scanf("%d",&sum[i]);
	}
	printf("\n");
	for(i=0;i<N;i++){
		printf("%d\n",sum[i]);
	}
	int min[N];
	int x,y,z=0,b[N];
	for(x=0;x<N;x++){
		min[x]=sum[x];
		b[x]=sum[x]%M;
		printf("¾l¼Æ:%d\n",b[x]);
		printf("min[%d]:%d\n",x,min[x]);
	}
	int small,m;
	for(y=0;y<N-1;y++){
		for(x=0;x<N-1;x++){
			if(b[x]>b[x+1]){
				small=min[x+1];
				min[x+1]=min[x];
				min[x]=small;
				m=b[x+1];
				b[x+1]=b[x];
				b[x]=m;
			}
		}
	}
	printf("\n");
	int temp=0;
	for(i=0;i<N-1;i++){
		for(j=i+1;j<N;j++){
			if(b[i]==b[j]){
				if(min[i]%2==1&&min[j]%2==1){
					if(min[i]<min[j]){
						temp=min[i];
						min[i]=min[j];
						min[j]=temp;
					}
				}
				if(min[i]%2==0&&min[j]%2==0){
					if(min[i]>min[j]){
						temp=min[i];
						min[i]=min[j];
						min[j]=temp;
					}
				}
				if(min[i]%2==0&&min[j]%2==1){
					temp=min[i];
					min[i]=min[j];
					min[j]=temp;
				}
			}
		}
	}
	for(i=0;i<N;i++){
		printf("min[%d]:%d\n",i,min[i]);
	}
}
