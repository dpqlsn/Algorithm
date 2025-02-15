#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int tot = 0;
    
    for (int i = 0; i < N; i++) {
        int T;
        scanf("%d", &T);
        tot += T;
    }

    tot += (N - 1) * 8;

    printf("%d %d\n", tot / 24, tot % 24);

    return 0;
}
