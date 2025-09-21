#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);

    if (N == 1) {
        printf("*\n");
    } else {
        for (int i = 0; i < N; i++) {
            if (i % 2 == 0) {
                for (int j = 0; j < N; j++) {
                    printf("* ");
                }
            } else {
                for (int j = 0; j < N; j++) {
                    printf(" *");
                }
            }
            printf("\n");
        }
    }

    return 0;
}
