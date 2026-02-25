#include <stdio.h>

int main() {
    int S, D;
    scanf("%d %d", &S, &D);

    if (S < D || (S + D) % 2 != 0) {
        printf("-1");
        return 0;
    }

    int a = (S + D) / 2;
    int b = (S - D) / 2;

    if (a < 0 || b < 0) {
        printf("-1");
    } else {
        printf("%d %d", a, b);
    }

    return 0;
}