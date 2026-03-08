#include <stdio.h>

int main() {
    long long R, C, N;
    scanf("%lld %lld %lld", &R, &C, &N);

    long long r = (R + N - 1) / N;
    long long c = (C + N - 1) / N;

    printf("%lld", r * c);
    return 0;
}