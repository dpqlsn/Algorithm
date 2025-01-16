#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int A[N + 1], a[N + 1];
    A[0] = 0;
    a[0] = 0;

    for (int i = 0; i < N; i++) {
        int temp;
        scanf("%d", &temp);
        A[N - i] = temp;
    }

    for (int i = 1; i <= N; i++) {
        a[i] = a[i - 1] + A[i];
    }

    if (a[N] < M) {
        printf("-1\n");
    } else {
        for (int i = 1; i <= N; i++) {
            if (a[i] >= M) {
                printf("%d\n", N - i + 1);
                break;
            }
        }
    }

    return 0;
}
