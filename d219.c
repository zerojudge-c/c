#include<stdio.h> 
#include<stdlib.h> 

int main(){
	
	long long int b,p,m,i,k;
	
	while(scanf("%lld %lld %lld",&b,&p,&m)==3){
		k=1;
		b=b%m;
		while(p>0){
			if(p%2==1)
				k=(k*b)%m;
			b=(b*b)%m;
			p/=2;
		}ss
		printf("%lld\n",k);
	}
	
	
	return 0;
}
