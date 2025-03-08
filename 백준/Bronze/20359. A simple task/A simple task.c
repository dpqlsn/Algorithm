#include <stdio.h>

void find(int n) {
    int p = 0;
    while (n % 2 == 0) {
        n /= 2;
        p++;
    }
    printf("%d %d\n", n, p);
}

int main() {
    int n;
    scanf("%d", &n);
    find(n);
    return 0;
}
