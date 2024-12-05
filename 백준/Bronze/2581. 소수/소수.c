#include <stdio.h>
#include <math.h>

int p(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int m, n, sum = 0, min = 10001;
    scanf("%d %d", &m, &n);
    for (int i = m; i <= n; i++) {
        if (p(i)) {
            sum += i;
            if (min == 10001) min = i;
        }
    }
    if (sum == 0) printf("-1\n");
    else printf("%d\n%d\n", sum, min);
    return 0;
}