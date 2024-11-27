#include <stdio.h>
#include <string.h>

int main() {
    char s[101];
    int arr[26];
    int i;

    for (i = 0; i < 26; i++) {
        arr[i] = -1;
    }

    scanf("%s", s);

    for (i = 0; s[i] != '\0'; i++) {
        int index = s[i] - 'a';
        if (arr[index] == -1) {
            arr[index] = i;
        }
    }

    for (i = 0; i < 26; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}