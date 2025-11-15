#include <stdio.h>

int main(void) {
    int M, K, C;
    if (scanf("%d", &M) != 1) return 0;
    if (scanf("%d", &K) != 1) return 0;
    if (scanf("%d", &C) != 1) return 0;

    int result = M * C;
    printf("%d\n", result);

    return 0;
}
