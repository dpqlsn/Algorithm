#include <stdio.h>

int main() {
    int x1, y1, x2, y2, x3, y3;
    int x4, y4;

    scanf("%d %d", &x1, &y1);
    scanf("%d %d", &x2, &y2);
    scanf("%d %d", &x3, &y3);

    x4 = (x1 == x2) ? x3 : (x1 == x3) ? x2 : x1;
    y4 = (y1 == y2) ? y3 : (y1 == y3) ? y2 : y1;

    printf("%d %d\n", x4, y4);

    return 0;
}
