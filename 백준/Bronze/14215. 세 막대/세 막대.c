#include <stdio.h>
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a < b) { int temp = a; a = b; b = temp; }
    if (b < c) { int temp = b; b = c; c = temp; }
    if (a < b) { int temp = a; a = b; b = temp; }

    while (a >= b + c) {
        a--;
    }

    printf("%d", a + b + c);

    return 0;
}
