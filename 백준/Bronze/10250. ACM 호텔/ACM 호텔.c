#include <stdio.h>
int main() {
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int h, w, n;
        scanf("%d %d %d", &h, &w, &n);

        int floor = n % h; 
        int line = (n / h) + 1;
        
        if (floor == 0) {
            floor = h;
            line -= 1;
        }
        
        printf("%d\n", floor * 100 + line);
    }

    return 0;
}