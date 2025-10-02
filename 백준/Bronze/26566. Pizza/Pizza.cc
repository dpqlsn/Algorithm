#include <stdio.h>
#include <math.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        double A, P1, R, P2;
        scanf("%lf %lf", &A, &P1);
        scanf("%lf %lf", &R, &P2);
        double val1 = A / P1;
        double val2 = (M_PI * R * R) / P2;
        if (val1 < val2)
            printf("Whole pizza\n");
        else
            printf("Slice of pizza\n");
    }
    return 0;
}
