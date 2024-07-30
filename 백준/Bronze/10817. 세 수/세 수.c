#include <stdio.h>
int main() {
    int a, b, c, num;
    scanf("%d %d %d", &a, &b, &c);
    if ((a >= b && a <= c) || (a >= c && a <= b)) num = a;
    else if ((b >= a && b <= c) || (b >= c && b <= a)) num = b;
    else num = c;
    printf("%d", num);
    return 0;
}
