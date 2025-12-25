#include <stdio.h>

int main() {
    int A, T;
    scanf("%d %d", &A, &T);
    int P = 10 + 2 * (25 - A + T);
    if (P < 0) P = 0;
    printf("%d", P);
    return 0;
}