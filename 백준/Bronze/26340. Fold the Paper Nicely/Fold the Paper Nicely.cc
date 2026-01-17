#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int a, b, k;
        scanf("%d %d %d", &a, &b, &k);

        printf("Data set: %d %d %d\n", a, b, k);

        for (int j = 0; j < k; j++) {
            if (a >= b) {
                a /= 2;
            } else {
                b /= 2;
            }
        }

        if (a >= b) {
            printf("%d %d\n\n", a, b);
        } else {
            printf("%d %d\n\n", b, a);
        }
    }

    return 0;
}