#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int total = 0;
    for (int i = 1; i <= n; i++) {
        total += i;
    }
    printf("%d ", total);
    printf("%d ", total * total);

    total = 0;
    for (int i = 1; i <= n; i++) {
        total += i * i * i;
    }
    printf("%d", total);

    return 0;
}
