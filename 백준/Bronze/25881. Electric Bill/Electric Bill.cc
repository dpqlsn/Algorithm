#include <stdio.h>

int main() {
    int a, b;
    int n;
    scanf("%d %d", &a, &b);
    scanf("%d", &n);

    while (n--) {
        int x;
        scanf("%d", &x);

        long long cost;
        if (x <= 1000) cost = (long long)x * a;
        else cost = 1000LL * a + (long long)(x - 1000) * b;

        printf("%d %lld\n", x, cost);
    }

    return 0;
}