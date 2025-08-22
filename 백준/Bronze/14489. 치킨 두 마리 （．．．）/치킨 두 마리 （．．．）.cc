#include <stdio.h>

int main() {
    int A, B, C;
    scanf("%d %d", &A, &B);
    scanf("%d", &C);

    if (A + B >= 2 * C)
        printf("%d\n", A + B - 2 * C);
    else
        printf("%d\n", A + B);

    return 0;
}
