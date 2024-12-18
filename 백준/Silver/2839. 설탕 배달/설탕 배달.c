#include <stdio.h>
int main() {
    int n, count = 0;
    scanf("%d", &n);
    
    while (n > 0) {
        if (n % 5 == 0) {
            count += n / 5;
            n = 0;
            break;
        }
        n -= 3;
        count++;
    }
    printf("%d", (n < 0) ? -1 : count);
    return 0;
}