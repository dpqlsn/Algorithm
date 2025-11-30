#include <stdio.h>

int main() {
    int N, C, P;
    scanf("%d %d %d", &N, &C, &P);

    if (N <= C * P)
        printf("yes");
    else
        printf("no");

    return 0;
}