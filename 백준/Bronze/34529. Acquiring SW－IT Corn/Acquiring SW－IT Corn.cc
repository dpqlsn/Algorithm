#include <stdio.h>

int main() {
    long long X, Y, Z;
    long long U, V, W;
    scanf("%lld %lld %lld", &X, &Y, &Z);
    scanf("%lld %lld %lld", &U, &V, &W);

    long long total = (U / 100) * X + (V / 50) * Y + (W / 20) * Z;
    printf("%lld\n", total);

    return 0;
}