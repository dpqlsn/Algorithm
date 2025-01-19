#include <stdio.h>

int N, M;
int len[8];
int check[8];

void track(int a) {
    if (a == M) {
        for (int i = 0; i < M; i++) {
            printf("%d ", len[i]);
        }
        printf("\n");
        return;
    }

    for (int i = 0; i < N; i++) {
        if (!check[i]) {
            check[i] = 1;
            len[a] = i + 1;
            track(a + 1);
            check[i] = 0;
        }
    }
}

int main() {
    scanf("%d %d", &N, &M);
    track(0);
    return 0;
}