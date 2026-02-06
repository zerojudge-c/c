#include<stdio.h>
#include<stdi.h>
int main()
{
    int i,x;
    int a[32];
    while(scanf("%d",&i)==1&&i!=0){
        int j=0,z=0;
        while(i>0){
            a[j++]=i%2;
            if(i%2==1){
                z++;
            }
            i=i/2;
        }
    printf("The parity of ");
    for(x=j-1;x>=0;x--){
        printf("%d",a[x]);
    }
    printf(" is %d (mod 2).\n",z);
    }
    return 0;
}
