#include <stdio.h>
int com(int n, int k) {
    if (k > n - k) {
        k = n - k;
    }
    int result = 1;
    for (int i = 0; i < k; i++) {
        result *= (n - i);
        result /= (i + 1);
    }
    return result;
}

int main() {
    int N, K;
    scanf("%d %d", &N, &K);
    printf("%d", com(N, K));
    return 0;
}
