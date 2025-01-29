#include <stdio.h>
int main() {
    int n, m, k, result = 0;
    
    scanf("%d %d %d", &n, &m, &k);

    while (n >= 2 && m >= 1 && n + m >= k + 3) {
        n -= 2;
        m -= 1;
        result++;
    }

    printf("%d\n", result);

    return 0;
}