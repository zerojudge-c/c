#include<stdio.h>
#include<stdlib.h>
//只需跑到根號i就行
	//因為j是因數，那 i/j 也是
	/*例如36=1*36 
			=2*18
			=3*12
			=4*9
			=6*6*/ 
int main(){
	
	long long int i,j,l,u,d,max,p=0,n,k;
	scanf("%lld",&n);
	for(k=0;k<n;k++){
		scanf("%lld %lld",&l,&u);
		for(i=l ; i<=u ; i++){
			max=0;
			for(j=1;j*j<=i;j++){
				if(i%j==0){
					max++;
					if(j*j!=i)
						max++;
				}
			}
			if(max>p){
				d=i;
				p=max;
			}
			
			
		}
		printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n",l,u,d,p);
	
	}
		
	
	
	return 0;
}
