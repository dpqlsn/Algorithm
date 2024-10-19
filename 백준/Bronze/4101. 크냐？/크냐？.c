#include <stdio.h>
int main() {
    int a, b;
    
    while (scanf("%d %d", &a, &b), a || b) {
        printf("%s\n", (a > b) ? "Yes" : "No");
    }
    
    return 0;
}