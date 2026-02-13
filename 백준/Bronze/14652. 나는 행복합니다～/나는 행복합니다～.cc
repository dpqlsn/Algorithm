#include <stdio.h>

int main() {
    long long N, M, K;
    scanf("%lld %lld %lld", &N, &M, &K);
    printf("%lld %lld", K / M, K % M);
    return 0;
}