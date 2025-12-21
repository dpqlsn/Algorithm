#include <stdio.h>

int main() {
    double x;
    while (1) {
        if (scanf("%lf", &x) != 1) break;
        if (x < 0) break;
        printf("Objects weighing %.2f on Earth will weigh %.2f on the moon.\n", x, x * 0.167);
    }
    return 0;
}