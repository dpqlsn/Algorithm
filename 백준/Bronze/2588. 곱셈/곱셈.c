#include <stdio.h>
int main() {
    int a, b;
    
    scanf("%d", &a);
    scanf("%d", &b);
    
    int c = b % 10;
    int t = (b / 10) % 10;
    int h = b / 100;
    
    int result1 = a * c;
    int result2 = a * t;
    int result3 = a * h;
    
    int result4 = a * b;
    
    printf("%d\n", result1);
    printf("%d\n", result2);
    printf("%d\n", result3);
    printf("%d\n", result4);
    
    return 0;
}