#include <stdio.h>
int main() {
    int UR, TR, UO, TO;
    scanf("%d %d %d %d", &UR, &TR, &UO, &TO);

    int score = 56 * UR + 24 * TR + 14 * UO + 6 * TO;

    printf("%d\n", score);

    return 0;
}