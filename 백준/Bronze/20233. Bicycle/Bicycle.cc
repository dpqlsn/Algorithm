#include <stdio.h>

int main() {
    int a, x, b, y, T;
    scanf("%d", &a);
    scanf("%d", &x);
    scanf("%d", &b);
    scanf("%d", &y);
    scanf("%d", &T);

    int days = 21;

    int cost1 = a + days * (T > 30 ? (T - 30) * x : 0);
    int cost2 = b + days * (T > 45 ? (T - 45) * y : 0);

    printf("%d %d", cost1, cost2);
    return 0;
}