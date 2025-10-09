#include <stdio.h>

int main() {
    int a, b, c, d;
    scanf("%d %d", &a, &b);
    scanf("%d %d", &c, &d);

    int x = a + c;
    int y = b + d;

    if (x < y)
        printf("Hanyang Univ.\n");
    else if (x > y)
        printf("Yongdap\n");
    else
        printf("Either\n");

    return 0;
}
