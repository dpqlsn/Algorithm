#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        char s[101];
        scanf("%s", s);

        int a = 0, b = 0;

        for (int i = 0; s[i]; i++) {
            if (s[i] == 'a') a++;
            else b++;
        }

        printf("%d\n", a < b ? a : b);
    }

    return 0;
}