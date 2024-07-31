#include <stdio.h>
int main() {
    int a, i, sum = 1;
    scanf("%d", &a);
    for (i=a; i>=1; i--) sum *= i;

    printf("%d", sum);
    return 0;
}