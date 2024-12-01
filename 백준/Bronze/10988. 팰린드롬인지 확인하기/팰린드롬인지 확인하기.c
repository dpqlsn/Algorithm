#include <stdio.h>
#include <string.h>
int main() {
    char n[101];
    scanf("%s", n);

    int length = strlen(n);
    int p = 1;

    for (int i = 0; i < length / 2; i++) {
        if (n[i] != n[length - i - 1]) {
            p = 0;
            break;
        }
    }

    printf("%d\n", p);
    return 0;
}
