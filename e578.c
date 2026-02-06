#include<stdio.h>

int main()
{
    int i;
    int arr;
    char a[]=
    "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    while((arr=getchar())!=EOF){
        if(arr==' '||arr=='\n'){
            putchar(arr);
        }
        else{
            for(i=0;a[i]!='\0';i++){
                if(arr==a[i]){
                    printf("%c",a[i-2]);
                    break;
                }
            }
        }
    }
    printf("\n");
    return 0;
}
