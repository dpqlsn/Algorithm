#include <stdio.h>

int main() {
    char s[51];
    int count_no_y = 0;
    int count_with_y = 0;

    scanf("%50s", s);

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
            count_no_y++;
            count_with_y++;
        } else if (s[i] == 'y') {
            count_with_y++;
        }
    }

    printf("%d %d", count_no_y, count_with_y);
    return 0;
}