#include <stdio.h>
int main() {
    int n, l, d, t;
    scanf("%d %d %d", &n, &l, &d);

    int end = n * l + (n - 1) * 5;

    for (t = 0; ; t += d) {
        if (t >= end || t % (l + 5) >= l) {
            printf("%d", t);
            break;
        }
    }
    return 0;
}