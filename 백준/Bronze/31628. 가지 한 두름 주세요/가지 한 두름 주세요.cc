#include <stdio.h>
#include <string.h>

int main() {
    char a[10][10][9];
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            scanf("%8s", a[i][j]);
        }
    }

    for (int i = 0; i < 10; i++) {
        int ok = 1;
        for (int j = 1; j < 10; j++) {
            if (strcmp(a[i][0], a[i][j]) != 0) {
                ok = 0;
                break;
            }
        }
        if (ok) {
            printf("1");
            return 0;
        }
    }

    for (int j = 0; j < 10; j++) {
        int ok = 1;
        for (int i = 1; i < 10; i++) {
            if (strcmp(a[0][j], a[i][j]) != 0) {
                ok = 0;
                break;
            }
        }
        if (ok) {
            printf("1");
            return 0;
        }
    }

    printf("0");
    return 0;
}