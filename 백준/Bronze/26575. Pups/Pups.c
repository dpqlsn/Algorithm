#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        double d, f, p;
        scanf("%lf %lf %lf", &d, &f, &p);
        
        printf("$%.2f\n", d * f * p);
    }

    return 0;
}
