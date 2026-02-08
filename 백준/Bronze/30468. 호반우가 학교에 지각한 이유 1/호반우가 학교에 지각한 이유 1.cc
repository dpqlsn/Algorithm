#include <stdio.h>

int main() {
    int STR, DEX, INT, LUK, N;
    scanf("%d %d %d %d %d", &STR, &DEX, &INT, &LUK, &N);

    int sum = STR + DEX + INT + LUK;
    int need = 4 * N - sum;

    if (need < 0) need = 0;

    printf("%d\n", need);
    return 0;
}