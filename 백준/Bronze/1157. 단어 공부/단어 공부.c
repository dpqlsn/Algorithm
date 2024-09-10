#include <stdio.h>
int main() {
    char s[1000001];
    int str[26] = {0};
    int i, max = 0, count = 0;
    char ch, result;

    fgets(s, sizeof(s), stdin);

    for (i = 0; s[i]; i++) {
        ch = s[i];
        if (ch >= 'a' && ch <= 'z') {
            str[ch - 'a']++;
        } else if (ch >= 'A' && ch <= 'Z') {
            str[ch - 'A']++;
        }
    }

    for (i = 0; i < 26; i++) {
        if (str[i] > max) {
            max = str[i];
            count = 1;
            result = 'A' + i;
        } else if (str[i] == max) {
            count++;
        }
    }

    printf("%c\n", count > 1 ? '?' : result);

    return 0;
}