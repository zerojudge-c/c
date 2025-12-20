#include<stdio.h>
#include<stdlib.h>
int main (void)
{
	int i,j,n,z;
	char tree[1000000][30];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<=1000000;j++){
			gets(tree[j][30]);
			if(tree[j]==tree[j+1]){
				z++;
				printf("%s %d",tree[j],z/100);
			}
		}
	}
	return 0;
}
