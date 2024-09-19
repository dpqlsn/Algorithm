#include <stdio.h>
int main() {
    int n;

    while (1) {
        scanf("%d", &n);
        if (n == 0) break;

        int a = 0;
        for (int k = 1; k <= n; k++) {
            a += (n - k + 1) * (n - k + 1);
        }

        printf("%d\n", a);
    }

    return 0;
}