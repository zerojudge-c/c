#include<stdio.h>
#include<stdlib.h>
int main (void)
{
	int i;
	char a[2000000];
	long long sum,n;
	while(scanf("%s",a)==1){
		n=0;
		if(a[0]=='0'){
			break;
		}
		for(i=0;a[i]!='\0';i++){
			n+=a[i]-'0';
		}
		sum=(n-1)%9+1;
		printf("%lld\n",sum);
	}
	return 0;
}
