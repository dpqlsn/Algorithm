#include <stdio.h>

int main() {
    for (int i = 0; i < 3; i++) {
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);

        int back = (a == 0) + (b == 0) + (c == 0) + (d == 0);

        if (back == 1) printf("A\n");
        else if (back == 2) printf("B\n");
        else if (back == 3) printf("C\n");
        else if (back == 4) printf("D\n");
        else printf("E\n");
    }
    return 0;
}