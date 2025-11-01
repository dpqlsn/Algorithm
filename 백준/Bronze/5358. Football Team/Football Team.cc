#include <stdio.h>
#include <string.h>

int main() {
    char str[1001];

    while (fgets(str, sizeof(str), stdin)) {
        for (int i = 0; i < strlen(str); i++) {
            if (str[i] == 'e')
                str[i] = 'i';
            else if (str[i] == 'E')
                str[i] = 'I';
            else if (str[i] == 'i')
                str[i] = 'e';
            else if (str[i] == 'I')
                str[i] = 'E';
        }
        printf("%s", str);
    }

    return 0;
}
