#include <stdio.h>

int main() {
    long long a, b;
    scanf("%lld %lld", &a, &b);

    long long area = a * b;
    long long bag = (area + 24200 - 1) / 24200;

    printf("%lld\n", bag);
    return 0;
}