#include <stdio.h>
#include <math.h>
int main() {
    int n;
    scanf("%d", &n);

    long long result = pow(2, n) + 1;
    result = result * result;

    printf("%lld", result);
    return 0;
}