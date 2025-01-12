#include <stdio.h>
int isPrime(long long num) {
    if (num < 2) return 0;
    if (num == 2) return 1;
    if (num % 2 == 0) return 0;
    for (long long i = 3; i * i <= num; i += 2) {
        if (num % i == 0) return 0;
    }
    return 1;
}

long long search(long long n) {
    while (1) {
        if (isPrime(n)) return n;
        n++;
    }
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        long long n;
        scanf("%lld", &n);
        printf("%lld\n", search(n));
    }
    return 0;
}