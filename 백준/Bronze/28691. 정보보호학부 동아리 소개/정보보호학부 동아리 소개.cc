#include <stdio.h>

int main() {
    char c;
    scanf("%c", &c);

    (c == 'M') ? printf("MatKor") :
    (c == 'W') ? printf("WiCys") :
    (c == 'C') ? printf("CyKor") :
    (c == 'A') ? printf("AlKor") :
                  printf("$clear");

    return 0;
}
