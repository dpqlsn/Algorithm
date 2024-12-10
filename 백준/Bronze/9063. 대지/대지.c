#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    int minx = 10000, miny = 10000;
    int maxx = -10000, maxy = -10000;

    for (int i = 0; i < n; i++) {
        int x, y;
        scanf("%d %d", &x, &y);

        if (x < minx) minx = x;
        if (x > maxx) maxx = x;
        if (y < miny) miny = y;
        if (y > maxy) maxy = y;
    }

    if (n == 1) {
        printf("0");
    } else {
        int area = (maxx - minx) * (maxy - miny);
        printf("%d\n", area);
    }
    return 0;
}