#include <stdio.h>

int main() {
    int total = 0;
    int a;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &a);
        total += a;
    }

    if (total % 4 == 0) {
        printf("N\n");
    } else if (total % 4 == 1) {
        printf("E\n");
    } else if (total % 4 == 2) {
        printf("S\n");
    } else if (total % 4 == 3) {
        printf("W\n");
    }

    return 0;
}
