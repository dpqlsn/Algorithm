#include <stdio.h>
int main() {
    double s1, s2;
    
    scanf("%lf %lf", &s1, &s2);
    
    if (s1 >= s2 / 2) {
        printf("E\n");
    } else {
        printf("H\n");
    }

    return 0;
}