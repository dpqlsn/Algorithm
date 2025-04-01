#include <stdio.h>
#include <string.h>

int main() {
    char octal[333335];
    scanf("%s", octal);

    int len = strlen(octal);
    int first = 1;

    for (int i = 0; i < len; i++) {
        int digit = octal[i] - '0';

        if (first) {
            if (digit == 0) {
                printf("0");
            } else {
                printf("%d", digit == 1 ? 1 : digit == 2 ? 10 : digit == 3 ? 11 :
                            digit == 4 ? 100 : digit == 5 ? 101 : digit == 6 ? 110 : 111);
            }
            first = 0;
        } else {
            printf("%03d", digit == 0 ? 0 : digit == 1 ? 1 : digit == 2 ? 10 : digit == 3 ? 11 :
                          digit == 4 ? 100 : digit == 5 ? 101 : digit == 6 ? 110 : 111);
        }
    }

    return 0;
}
