#include <stdio.h>

int main() {
    int N;
    long long M;
    scanf("%d %lld", &N, &M);

    long long result = 1;
    long long a;

    for(int i = 0; i < N; i++) {
        scanf("%lld", &a);
        result = (result * (a % M)) % M;
    }

    printf("%lld\n", result);
    return 0;
}