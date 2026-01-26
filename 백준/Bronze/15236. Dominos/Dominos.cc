#include <stdio.h>

int main() {
    int N;
    long long total = 0;
    scanf("%d", &N);

    for (int i = 0; i <= N; i++) {
        for (int j = i; j <= N; j++) {
            total += i + j;
        }
    }

    printf("%lld\n", total);
    return 0;
}