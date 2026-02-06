
#include <stdio.h>
#include <string.h>

#define MAXV 65536

int main() {
    int n,i;
    static int cnt[MAXV];

    while (scanf("%d", &n) == 1) {
        memset(cnt, 0, sizeof(cnt));

        for (i = 0; i < n; i++) {
            int x;
            scanf("%d", &x);
            cnt[x]++;
        }

        int mid1 = (n - 1) / 2;
        int mid2 = n / 2;

        int sum = 0;
        int L = -1, R = -1;

        for (i = 0; i < MAXV; i++) {
            sum += cnt[i];
            if (L == -1 && sum > mid1) L = i;
            if (sum > mid2) {
                R = i;
                break;
            }
        }

        /* 材计 */
        int A = L;

        /* 材计Xi 辅 [L, R] 计秖 */
        int count = 0;
        for ( i = L; i <= R; i++) {
            count += cnt[i];
        }

        /* 材计 */
        int ways = R - L + 1;

        printf("%d %d %d\n", A, count, ways);
    }
    return 0;
}
