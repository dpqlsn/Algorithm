#include <stdio.h>

int main() {
    int v[5];
    for (int i = 0; i < 5; i++) {
        scanf("%d", &v[i]);
    }

    int count = 0;
    for (int i = 1; i < 5; i++) {
        if (v[0] - v[i] <= 1000) {
            count++;
        }
    }

    printf("%d", count);
    return 0;
}
