#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int a, b;
        scanf("%d %d", &a, &b);

        a = a % 10;

        if (a == 0) {
            printf("10\n");
        } else if (a == 1 || a == 5 || a == 6) {
            printf("%d\n", a);
        } else if (a == 4 || a == 9) {
            b = b % 2;
            if (b == 1) {
                printf("%d\n", a);
            } else {
                printf("%d\n", (a * a) % 10);
            }
        } else {
            b = b % 4;
            if (b == 0) {
                printf("%d\n", (a * a * a * a) % 10);
            } else {
                int result = 1;
                for (int j = 0; j < b; j++) {
                    result = (result * a) % 10;
                }
                printf("%d\n", result);
            }
        }
    }

    return 0;
}
