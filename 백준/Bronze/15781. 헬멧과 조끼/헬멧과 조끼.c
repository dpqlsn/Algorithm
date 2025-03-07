#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int maxHelmet = 0, maxVest = 0, temp;

    for (int i = 0; i < N; i++) {
        scanf("%d", &temp);
        if (temp > maxHelmet) {
            maxHelmet = temp;
        }
    }

    for (int i = 0; i < M; i++) {
        scanf("%d", &temp);
        if (temp > maxVest) {
            maxVest = temp;
        }
    }

    printf("%d", maxHelmet + maxVest);

    return 0;
}
