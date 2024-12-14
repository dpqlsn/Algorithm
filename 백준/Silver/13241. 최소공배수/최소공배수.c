#include <stdio.h>

long long gcd(long long a, long long b) {
    return b == 0 ? a : gcd(b, a % b);
}

long long lcm(long long a, long long b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    long long A, B;
    scanf("%lld %lld", &A, &B);
    printf("%lld", lcm(A, B));
    return 0;
}