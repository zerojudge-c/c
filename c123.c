#include<stdio.h>

int main(void)
{
    int n;   // 車廂數量 N

    // 一直讀 N，直到 N=0 結束
    while(scanf("%d",&n)==1 && n!=0)
    {
        // 一個 N 可能有多組排列測試
        while(1)
        {
            int a[1005];   // 儲存目標排列

            // 先讀排列第一個數
            scanf("%d",&a[0]);

            // 如果第一個數是 0 → 代表這組 N 結束
            if(a[0]==0) break;

            // 讀剩下排列
            for(int i=1;i<n;i++)
                scanf("%d",&a[i]);

            // ===== stack 模擬區 =====

            int temp[1005];   // stack（車站側線）
            int top=-1;       // stack 頂端（-1 代表空）
            int next=1;       // 下一個要進站的車（原火車 1~N）
            int f=1;          // 是否可行（1=Yes, 0=No）

            // 依序處理每個目標車廂
            for(int i=0;i<n;i++)
            {
                // 如果 stack top 不是我要的
                // 且還有車可以進站
                // 就一直 push
                while((top==-1 || temp[top]!=a[i]) && next<=n)
                {
                    temp[++top]=next;   // push：車進站
                    next++;             // 下一台車
                }

                // 如果現在 stack top 就是我要的
                if(temp[top]==a[i])
                    top--;   // pop：車出站

                else{
                    // push 完也沒有我要的
                    // 代表永遠拿不到
                    f=0;
                    break;
                }
            }

            // 根據結果輸出
            if(f) printf("Yes\n");
            else printf("No\n");
        }

        // 每組 N 測試後要空一行
        printf("\n");
    }
    return 0;
}
