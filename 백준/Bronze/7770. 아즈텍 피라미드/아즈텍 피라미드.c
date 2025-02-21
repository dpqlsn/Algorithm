#include <stdio.h>
int main() {
    int n, x = 0, h = 0;
    scanf("%d", &n);

    while (x <= n) {
        h++;
        x += (h * 2 - 1) * (h * 2 - 1) - 4 * (h * (h - 1) / 2);
    }
    
    if (x > n) h--;

    printf("%d", h);
    
    return 0;
}