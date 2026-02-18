#include <stdio.h>
#include <limits.h>

int main() {
    int N;
    long long X;
    scanf("%d %lld", &N, &X);

    int prev, curr;
    scanf("%d", &prev);

    long long min = LLONG_MAX;

    for (int i = 2; i <= N; i++) {
        scanf("%d", &curr);
        long long cost = (long long)(prev + curr) * X;
        if (cost < min) min = cost;
        prev = curr;
    }

    printf("%lld", min);
    return 0;
}