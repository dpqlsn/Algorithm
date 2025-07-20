#include <stdio.h>

int main() {
    int N, A, B;
    scanf("%d %d %d", &N, &A, &B);

    int result = N + (B - N);

    if (A == result) {
        printf("Anything\n");
    } else if (A > result) {
        printf("Subway\n");
    } else if (A < result) {
        printf("Bus\n");
    }

    return 0;
}
