#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        char str[1001];
        scanf("%s", str);

        char f = str[0];
        int j = 0;
        while (str[j] != '\0') {
            j++;
        }
        char l = str[j - 1];
        printf("%c%c\n", f, l);
    }
    return 0;
}