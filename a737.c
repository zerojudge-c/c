#include<stdio.h>
#include<stdlib.h>
int main (void)
{
	int i,j,x=0,temp,n,r,si[500];
	scanf("%d",&n);
	while(scanf("%d",&r)==1&&x<n){
		int j=0,y=0,sum=0,sum1=0,sum2=0;
			for(i=0;i<r;i++){
				scanf("%d",&si[i]);
			}
			for(i=0;i<r-1;i++){
				for(j=i+1;j<r;j++){
					if(si[i]>si[j]){
						temp=si[i];
						si[i]=si[j];
						si[j]=temp;
					}
				}
			}
			j=r/2;
			for(i=0;i<r;i++){
				sum+=abs(si[i]-si[j]);
			}
			printf("%d\n",sum);
		x++;
	}
	return 0;
}
