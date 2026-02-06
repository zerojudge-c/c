#include<stdio.h>
#include<stdlib.h>
#include<>
int main (void)
{
	int a,open=1;
	while((a=getchar())!=EOF){
		if(a=='"'){
			if(open!=0){
				printf("``");
				open=0;
			}
			else{
				printf("''");
				open=1;
			}
		}
		else{
			putchar(a);
		}
	}
	return 0;
}
