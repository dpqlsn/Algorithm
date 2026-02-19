#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int x, y;
    int minX, minY;

    scanf("%d %d", &minX, &minY);

    for (int i = 1; i < N; i++) {
        scanf("%d %d", &x, &y);
        if (y < minY) {
            minY = y;
            minX = x;
        }
    }

    printf("%d %d\n", minX, minY);

    return 0;
}