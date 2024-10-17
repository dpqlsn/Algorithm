#include <stdio.h>
int main() {
    int n, dp[45] = {0, 1};

    scanf("%d", &n);

    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    printf("%d", dp[n]);
    return 0;
}