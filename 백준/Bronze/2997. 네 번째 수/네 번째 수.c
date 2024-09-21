#include <stdio.h>

int main() {
    int x[3];
    
    for (int i = 0; i < 3; i++) {
        scanf("%d", &x[i]);
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2 - i; j++) {
            if (x[j] > x[j + 1]) {
                int temp = x[j];
                x[j] = x[j + 1];
                x[j + 1] = temp;
            }
        }
    }

    int x1 = x[1] - x[0];
    int x2 = x[2] - x[1];

    if (x1 == x2) {
        printf("%d\n", x[2] + x2);
    } else if (x1 < x2) {
        printf("%d\n", x[2] - (x1 < x2 ? x1 : x2));
    } else {
        printf("%d\n", x[1] - (x1 < x2 ? x1 : x2));
    }

    return 0;
}