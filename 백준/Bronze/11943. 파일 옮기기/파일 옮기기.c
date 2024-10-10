#include <stdio.h>
int main() {
    int a, b, c, d;

    scanf("%d %d", &a, &b);
    scanf("%d %d", &c, &d);

    int m = a + d;
    int n = b + c;
    
    int result = (m < n) ? m : n;
    printf("%d\n", result);
    
    return 0;
}