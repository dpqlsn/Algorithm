#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    if (20 <= a && a <= 23) {
        printf("%d", 24 - a + b);
    } else {
        printf("%d", b - a);
    }

    return 0;
}
