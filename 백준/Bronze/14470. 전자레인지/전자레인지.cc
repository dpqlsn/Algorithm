#include <stdio.h>

int main() {
    int A, B, C, D, E;
    int time = 0;

    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    scanf("%d", &D);
    scanf("%d", &E);

    if (A < 0) {
        time += (-A) * C;
        time += D;
        time += B * E;
    } else {
        time += (B - A) * E;
    }

    printf("%d\n", time);

    return 0;
}