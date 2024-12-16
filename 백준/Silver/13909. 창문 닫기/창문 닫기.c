#include <stdio.h>
int main() {
    long long n;
    scanf("%lld", &n);

    long long count = 0;
    long long i = 1;

    while (i * i <= n) {
        count++;
        i++;
    }
    printf("%lld", count);
    return 0;
}