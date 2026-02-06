#include <stdio.h>
#include <stdlib.h>
int solve(int n, int m) {
    int last = 0;
    for (int i = 2; i <= n; i++) {
        last = (last + m) % i;
    }
    return last;
}

int main() {
    int N;
    while (scanf("%d", &N) != EOF && N != 0) {
        for (int m = 1; ; m++) {
            if (solve(N - 1, m) == 11) {
                printf("%d\n", m);
                break;
            }
        }
    }
    return 0;
}
