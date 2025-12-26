#include <stdio.h>

int main() {
    int b1, b2, b3, d1, d2;
    scanf("%d %d %d %d %d", &b1, &b2, &b3, &d1, &d2);

    int minBurger = b1;
    if (b2 < minBurger) minBurger = b2;
    if (b3 < minBurger) minBurger = b3;

    int minDrink = d1 < d2 ? d1 : d2;

    printf("%d\n", minBurger + minDrink - 50);
    return 0;
}