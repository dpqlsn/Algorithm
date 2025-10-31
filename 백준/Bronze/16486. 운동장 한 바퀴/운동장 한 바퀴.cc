#include <stdio.h>

int main(void) {
    int d1, d2;
    double pi = 3.141592;
    
    scanf("%d", &d1);
    scanf("%d", &d2);
    
    printf("%.6f\n", d1 * 2 + 2 * pi * d2);
    
    return 0;
}
