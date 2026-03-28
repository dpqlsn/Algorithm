#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int w, h;
    int sum = 0;

    for (int i = 0; i < N; i++) {
        scanf("%d %d", &w, &h);

        if (w == 136) sum += 1000;
        else if (w == 142) sum += 5000;
        else if (w == 148) sum += 10000;
        else if (w == 154) sum += 50000;
    }

    printf("%d", sum);

    return 0;
}