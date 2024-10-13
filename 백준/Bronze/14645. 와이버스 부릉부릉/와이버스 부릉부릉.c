#include <stdio.h>
int main() {
    int n, k, a, b;
    scanf("%d %d", &n, &k);

    while (n--) {
        scanf("%d %d", &a, &b);
        k += a - b;
        if (k < 0) k = 0;
    }

    printf("비와이");
    return 0;
}