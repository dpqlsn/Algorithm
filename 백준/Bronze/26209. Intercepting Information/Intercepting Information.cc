#include <stdio.h>

int main() {
    int x;
    int found = 0;

    while (scanf("%d", &x) != EOF) {
        if (x == 9) {
            found = 1;
        }
    }

    if (found)
        printf("F\n");
    else
        printf("S\n");

    return 0;
}
