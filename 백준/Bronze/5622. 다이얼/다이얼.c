#include <stdio.h>
#include <string.h>

int main() {
    char n[16];
    int tot = 0;

    scanf("%s", n);
    int length = strlen(n);

    for (int i = 0; i < length; i++) {
        char ch = n[i];

        if (ch >= 'A' && ch <= 'C') {
            tot += 3;
        } else if (ch >= 'D' && ch <= 'F') {
            tot += 4;
        } else if (ch >= 'G' && ch <= 'I') {
            tot += 5;
        } else if (ch >= 'J' && ch <= 'L') {
            tot += 6;
        } else if (ch >= 'M' && ch <= 'O') {
            tot += 7;
        } else if (ch >= 'P' && ch <= 'S') {
            tot += 8;
        } else if (ch >= 'T' && ch <= 'V') {
            tot += 9;
        } else if (ch >= 'W' && ch <= 'Z') {
            tot += 10;
        }
    }

    printf("%d", tot);
    return 0;
}