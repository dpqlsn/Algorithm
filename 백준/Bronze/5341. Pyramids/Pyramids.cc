#include <stdio.h>

int main(void) {
    while (1) {
        int n;
        scanf("%d", &n);

        if (n == 0) break;

        int t = n * (n + 1) / 2;
        printf("%d\n", t);
    }
    return 0;
}