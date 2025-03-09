#include <stdio.h>
#include <math.h>

int main() {
    int N, X, Y, R;
    scanf("%d", &N);
    scanf("%d %d %d", &X, &Y, &R);

    int A = 0, B = 0;

    for (int i = 0; i < N; i++) {
        int Ti;
        scanf("%d", &Ti);

        int distance = abs(Ti - X);

        if (distance < R) {
            A++; 
        } else if (distance == R) {
            B++;
        }
    }

    printf("%d %d\n", A, B);
    return 0;
}
