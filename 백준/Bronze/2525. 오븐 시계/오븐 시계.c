#include<stdio.h>
int main() {
    int h, m, n;
    scanf("%d %d", &h, &m);
    scanf("%d", &n);

    m += n;
    h += m / 60;
    m %= 60;
    h %= 24;

    printf("%d %d", h, m);

    return 0;
}
