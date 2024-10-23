#include <stdio.h>
int main() {
    int count = 0;
    char line[101];

    while (fgets(line, sizeof(line), stdin)) {
        count++;
    }

    printf("%d", count);
    return 0;
}