#include <stdio.h>
int main() {
    long long n;
    scanf("%lld", &n);

    long long count = n * (n - 1) / 2;
    printf("%lld\n", count);
    printf("2\n");

    return 0;
}