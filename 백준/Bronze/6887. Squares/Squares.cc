#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);
    int k = (int)sqrt(n);
    printf("The largest square has side length %d.", k);
    return 0;
}