#include <stdio.h>
#include <stdlib.h> 
int main()
{
	char a[1000],b[1000],x[1000];
	int i,j;
	for(;;){
		gets(a);
		gets(b);
		int y=0;
		for(i=0;a[i]!='\0';i++){
			for(j=0;b[j]!='\0';j++){
				if(a[i]==b[j]){
					x[y]=a[i];
					y++;
					break;
				}
			}
		}
		for(i='a';i<'z';i++){
			for(j=0;j<y;j++){
				if((int)x[j]==i){
					printf("%c",x[j]);
				}	
			}
		}
	}
	return 0;
}
