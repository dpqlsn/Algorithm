#include <stdio.h>
#include <string.h>

int main() {
    char S[1001];
    
    if (fgets(S, sizeof(S), stdin) == NULL) {
        printf("CE");
        return 0;
    }

    int len = strlen(S);

    if (S[len - 1] == '\n') {
        S[len - 1] = '\0';
        len--;
    }

    if (len <= 2 || !(S[0] == '\"' && S[len - 1] == '\"')) {
        printf("CE");
    } else {
        for (int i = 1; i < len - 1; i++) {
            putchar(S[i]);
        }
    }

    return 0;
}
