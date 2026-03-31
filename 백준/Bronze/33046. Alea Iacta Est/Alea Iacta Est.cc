#include <stdio.h>

int main() {
    int A, B, C, D;
    scanf("%d %d", &A, &B);
    scanf("%d %d", &C, &D);

    int sum1 = A + B;
    int sum2 = C + D;

    int ga = (1 + (sum1 - 1)) % 4;
    if (ga == 0) ga = 4;

    int jin = (ga + (sum2 - 1)) % 4;
    if (jin == 0) jin = 4;

    printf("%d", jin);

    return 0;
}