#include <stdio.h>

int main() {
    int res = 1001, n, a, b;
    scanf("%d", &n);

    while (n--) {
        scanf("%d %d", &a, &b);
        if (a <= b && b < res) res = b;
    }

    printf("%d\n", res == 1001 ? -1 : res);
    return 0;
}