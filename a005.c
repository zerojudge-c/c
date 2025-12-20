#include<stdio.h>
#include<stdlib.h>
int main (void)
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int a[4];
        scanf("%d %d %d %d",&a[0],&a[1],&a[2],&a[3]);
        if(a[1]-a[0]==a[2]-a[1])
            printf("%d %d %d %d %d\n",a[0],a[1],a[2],a[3],a[3]+(a[1]-a[0]));
        else
            printf("%d %d %d %d %d\n",a[0],a[1],a[2],a[3],a[3]*(a[1]/a[0]));
    } 
    return 0;
}
