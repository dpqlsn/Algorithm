#include <stdio.h>

int main() {
    int n, x;
    int found[3] = {0, 0, 0};

    scanf("%d", &n);

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &x);
            if (x == 7) {
                found[i] = 1;
            }
        }
    }

    if (found[0] && found[1] && found[2]) {
        printf("777");
    } else {
        printf("0");
    }

    return 0;
}