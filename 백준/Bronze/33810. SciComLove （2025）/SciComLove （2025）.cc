#include <stdio.h>

int main() {
    char s[11];
    char target[] = "SciComLove";
    int count = 0;

    scanf("%s", s);

    for (int i = 0; i < 10; i++) {
        if (s[i] != target[i]) count++;
    }

    printf("%d", count);

    return 0;
}