#include <stdio.h>
int main() {
    char str[1000001];
    int count = 0;
    int i = 0;

    fgets(str, sizeof(str), stdin);

    while (str[i]) {
        if (str[i] != ' ' && str[i] != '\n') {
            count++;
            while (str[i] && str[i] != ' ' && str[i] != '\n') i++;
        }
        while (str[i] == ' ' || str[i] == '\n') i++;
    }

    printf("%d", count);
    return 0;
}