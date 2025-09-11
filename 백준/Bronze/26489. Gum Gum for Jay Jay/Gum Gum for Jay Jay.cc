#include <stdio.h>

int main(void) {
    char line[1024];
    int cnt = 0;

    while (fgets(line, sizeof(line), stdin) != NULL) {
        cnt++;
    }

    printf("%d", cnt);

    return 0;
}