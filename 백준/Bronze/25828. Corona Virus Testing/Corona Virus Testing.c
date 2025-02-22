#include <stdio.h>

int main() {
    int g, p, t;
    scanf("%d %d %d", &g, &p, &t);

    int i = g * p;
    int po = g + (t * p);

    if (i < po) printf("1\n");
    else if (i > po) printf("2\n");
    else printf("0\n");

    return 0;
}
