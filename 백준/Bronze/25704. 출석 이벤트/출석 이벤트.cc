#include <stdio.h>

int main() {
    int N, P;
    scanf("%d", &N);
    scanf("%d", &P);

    int min_price = P;
    int price;

    if (N >= 5) {
        price = P - 500;
        if (price < 0) price = 0;
        if (price < min_price) min_price = price;
    }

    if (N >= 10) {
        price = P * 90 / 100;
        if (price < min_price) min_price = price;
    }

    if (N >= 15) {
        price = P - 2000;
        if (price < 0) price = 0;
        if (price < min_price) min_price = price;
    }

    if (N >= 20) {
        price = P * 75 / 100;
        if (price < min_price) min_price = price;
    }

    printf("%d\n", min_price);
    return 0;
}
