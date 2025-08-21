#include <stdio.h>

int main() {
    int n, sum = 0;
    while (scanf("%d", &n) != EOF) {
        sum += n;
    }

    printf("%d\n", sum * 5);
    return 0;
}
