#include <stdio.h>
int main() {
    char n[101];
    while (fgets(n, sizeof(n), stdin)) {
        printf("%s", n);
    }
    return 0;
}