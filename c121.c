#include <stdio.h>
int fib[5001][1200];   // 每個 Fibonacci 存每一位
int len[5001];         // 每個 Fibonacci 的位數
int main()
{
    int n;
    
    fib[0][0] = 0;
    len[0] = 1;
    fib[1][0] = 1;
    len[1] = 1;
    /* 預先算 */
    for(int i = 2; i <= 5000; i++)
    {
        int carry = 0;
        /* 先設長度 */
        if(len[i-1] > len[i-2]){
			len[i] = len[i-1];
		}
        else{
        	len[i] = len[i-2];
		}
        for(int j = 0; j < len[i]; j++)
        {
            int sum = fib[i-1][j] + fib[i-2][j] + carry;
            fib[i][j] = sum % 10;
            carry = sum / 10;
        }

        if(carry!=0)
        {
            fib[i][len[i]] = carry;
            len[i]++;
        }
    }
    while(scanf("%d", &n) != EOF)
    {
        printf("The Fibonacci number for %d is ", n);
        for(int i = len[n]-1; i >= 0; i--)
            printf("%d", fib[n][i]);
        printf("\n");
    }
    return 0;
}
