#include <stdio.h>

int main() {
    int n[10];
    int r[42] = {0};
    int count = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &n[i]);
        r[n[i] % 42] = 1;
    }

    for (int i = 0; i < 42; i++) {
        if (r[i] == 1) {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}
