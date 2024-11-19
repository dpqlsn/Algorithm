#include <stdio.h>
int main() {
    int n, m, x, y;
    scanf("%d %d", &n, &m);

    int b[n];
    for (int i = 0; i < n; i++) b[i] = i + 1;

    while (m--) {
        scanf("%d %d", &x, &y);
        x--; y--; 
        int temp = b[x];
        b[x] = b[y];
        b[y] = temp;
    }
    for (int i = 0; i < n; i++) printf("%d ", b[i]);
    return 0;
}