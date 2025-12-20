#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,j,a,b,min=0,q=0,w;
	int x[50];
	
	scanf("%d",&i);
	for(j=0;j<i;j++){  
		scanf("%d",&a); 
		for(b=0;b<a;b++){
			scanf("%d",&x[b]);
			}
		int q=0;
		for(w=0;w<a-1;w++){
			for(b=0;b<a-1;b++){
				if(x[b]>x[b+1]){
					min=x[b];
					x[b]=x[b+1];
					x[b+1]=min;
					q++;
				}
			}
		}
		printf("Optimal train swapping takes %d swaps.",q);
	}
	
	return 0;
 } 
