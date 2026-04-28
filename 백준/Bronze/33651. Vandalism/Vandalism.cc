#include <stdio.h>
#include <string.h>

int main() {
    char s[4], original[] = "UAPC";
    scanf("%s", s);

    int j = 0;
    for (int i = 0; i < 4; i++) {
        if (s[j] == original[i]) {
            j++;
        } else {
            printf("%c", original[i]);
        }
    }

    return 0;
}