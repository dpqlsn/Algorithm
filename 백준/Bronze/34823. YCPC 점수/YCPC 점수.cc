#include <stdio.h>

int main() {
    long long y, c, p;
    scanf("%lld %lld %lld", &y, &c, &p);

    long long result = y;
    if (p < result) result = p;
    if (c / 2 < result) result = c / 2;

    printf("%lld\n", result);
    return 0;
}