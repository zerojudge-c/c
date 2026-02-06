#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int S,j,N,i;
	double p;
	while(scanf("%d",&S)==1&&S<=1000){
		for(j=0;j<S;j++){
			scanf("%d %lf %d",&N,&p,&i);
			double numerator = p * pow(1 - p, i - 1);
	        double denominator = 1 - pow(1 - p, N);
    	    double result = numerator / denominator;
			printf("%.4lf\n", result);
		}
	}
	return 0;
}
