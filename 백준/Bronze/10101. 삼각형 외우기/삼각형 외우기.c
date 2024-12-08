#include <stdio.h>
int main() {
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    int sum = a + b + c;

    if (sum != 180) printf("Error");
    else if (a == 60 && b == 60 && c == 60) printf("Equilateral");
    else if (a == b || b == c || a == c) printf("Isosceles");
    else printf("Scalene");

    return 0;
}