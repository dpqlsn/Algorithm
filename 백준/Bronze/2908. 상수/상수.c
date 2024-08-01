#include <stdio.h>
int main() {
    int a, num, c = 0, b, e=0, value;
    scanf("%d %d", &a, &b);

    while (a > 0) {
        num = a % 10;
        a = a / 10;
        c = c * 10 + num;
    }

    while (b > 0) {
        value = b % 10;
        b = b / 10;
        e = e * 10 + value;
    }

    if (c > e) printf("%d", c);
    else if (e > c) printf("%d", e);

    return 0;
}