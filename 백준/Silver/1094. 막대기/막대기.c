#include <stdio.h>
int main() {
    int x, count = 0, n = 64;
    
    scanf("%d", &x);
    
    while (x > 0) {
        if (n > x) {
            n /= 2;
        } else {
            count++;
            x -= n;
        }
    }
    
    printf("%d", count);
    return 0;
}