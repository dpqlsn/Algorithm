#include <stdio.h>

int N, M;
int p[30][30];

int getMax(int a, int b) {
    return a > b ? a : b;
}

int main() {
    scanf("%d %d", &N, &M);
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &p[i][j]);
        }
    }

    int max = 0;

    for (int a = 0; a < M; a++) {
        for (int b = a + 1; b < M; b++) {
            for (int c = b + 1; c < M; c++) {
                int total = 0;

                for (int i = 0; i < N; i++) {
                    int best = getMax(p[i][a], getMax(p[i][b], p[i][c]));
                    total += best;
                }

                max = getMax(max, total);
            }
        }
    }

    printf("%d\n", max);
    return 0;
}
