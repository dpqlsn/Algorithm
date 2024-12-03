#include <stdio.h>
int main() {
    int n, i, sum, count, a[100000];
    
    while (1) {
        scanf("%d", &n);
        if (n == -1) break;
        
        sum = count = 0;
        for (i = 1; i <= n / 2; i++) {
            if (n % i == 0) {
                a[count++] = i;
                sum += i;
            }
        }
        
        if (sum == n) {
            printf("%d = ", n);
            for (i = 0; i < count; i++) 
                printf("%d%s", a[i], i < count - 1 ? " + " : "\n");
        } else {
            printf("%d is NOT perfect.\n", n);
        }
    }
    
    return 0;
}