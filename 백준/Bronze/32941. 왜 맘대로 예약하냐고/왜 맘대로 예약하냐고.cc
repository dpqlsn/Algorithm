#include <stdio.h>

int main() {
    int T, X;
    scanf("%d %d", &T, &X);

    int N;
    scanf("%d", &N);

    for(int i = 0; i < N; i++) {
        int K;
        scanf("%d", &K);

        int possible = 0;
        for(int j = 0; j < K; j++) {
            int time;
            scanf("%d", &time);
            if(time == X) possible = 1;
        }

        if(!possible) {
            printf("NO");
            return 0;
        }
    }

    printf("YES");
    return 0;
}