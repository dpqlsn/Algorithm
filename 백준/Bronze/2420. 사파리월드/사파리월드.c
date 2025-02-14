#include <stdio.h>

int main() {
    long long N, M;
    scanf("%lld %lld", &N, &M);

    long long d = (N > M) ? (N - M) : (M - N);
    printf("%lld\n", d);

    return 0;
}
