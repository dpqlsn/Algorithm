#include <stdio.h>
int main() {
    int c[6] = {1, 1, 2, 2, 2, 8};
    int f[6];
    int result[6];

    for (int i = 0; i < 6; i++) {
        scanf("%d", &f[i]);
    }

    for (int i = 0; i < 6; i++) {
        result[i] = c[i] - f[i];
    }

    for (int i = 0; i < 6; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}