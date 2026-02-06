#include<stdio.h>
#include<stdlib.h>
int main (void)
{
	int n,m,f=1;
	while(scanf("%d %d",&n,&m)==2){
		if(n==0&&m==0){
			break;
		}
		char map[105][105];
		int i,j;
		for(i=0;i<n;i++){
			scanf("%s",map[i]);
		}
		if(f>1){
			printf("\n");
		}
		printf("Field #%d:\n",f);
		f++;
		int x,y,sum,a,b;
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				if(map[i][j]=='*'){
					printf("*");
				}
				else{
					sum=0;
					for(x=-1;x<=1;x++){
						for(y=-1;y<=1;y++){
							a=i+x;
							b=j+y;
							if(a>=0&&a<n&&b>=0&&b<m){
								if(map[a][b]=='*'){
									sum++;
								}
							}
						}
					}
					printf("%d",sum);
				}
			}
			printf("\n");
		}
	}
	return 0;
}
