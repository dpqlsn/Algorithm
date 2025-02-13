#include <stdio.h>
int main() {
    int W, H;
    scanf("%d %d", &W, &H);
    
    double a = (W * H) / 2.0;
    printf("%.1f\n", a);

    return 0;
}