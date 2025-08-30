#include <stdio.h>

int main(void) {
    int n, x;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        printf("%d %d\n", x, x);
    }
    return 0;
}
