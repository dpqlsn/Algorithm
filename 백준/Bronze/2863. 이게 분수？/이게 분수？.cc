#include <stdio.h>

int main() {
    int A, B, C, D;
    scanf("%d %d", &A, &B);
    scanf("%d %d", &C, &D);

    double v0 = (double)A / C + (double)B / D;
    double v1 = (double)C / D + (double)A / B;
    double v2 = (double)D / B + (double)C / A;
    double v3 = (double)B / A + (double)D / C;

    double max = v0;
    int idx = 0;

    if (v1 > max) { max = v1; idx = 1; }
    if (v2 > max) { max = v2; idx = 2; }
    if (v3 > max) { max = v3; idx = 3; }

    printf("%d\n", idx);
    return 0;
}