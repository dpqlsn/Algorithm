#include <stdio.h>
int main() {
    double c, b;
    scanf("%lf %lf", &c, &b);
    double result = c / b;
    printf("%.10f", result);
    return 0;
}