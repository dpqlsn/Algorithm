#include <stdio.h>
int main() {
    long long n;
    scanf("%lld", &n);

    long long cnt = n * n * n;
    int a = 3;

    printf("%lld\n", cnt);
    printf("%d\n", a);

    return 0;
}