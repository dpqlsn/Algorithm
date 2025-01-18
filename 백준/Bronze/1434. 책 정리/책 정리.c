#include <stdio.h>

int main() {
    int n, m, a = 0, b = 0, x;

    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        a += x > 0 ? x : 0;
    }
    for (int i = 0; i < m; i++) {
        scanf("%d", &x);
        b += (x % 2 == 0) ? x : x;
    }
    printf("%d", a - b);

    return 0;
}
