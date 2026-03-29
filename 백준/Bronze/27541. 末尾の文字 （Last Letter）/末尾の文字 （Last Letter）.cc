#include <stdio.h>
#include <string.h>

int main() {
    int N;
    char S[101];

    scanf("%d", &N);
    scanf("%s", S);

    if (S[N - 1] == 'G') {
        S[N - 1] = '\0';
    } else {
        S[N] = 'G';
        S[N + 1] = '\0';
    }

    printf("%s", S);

    return 0;
}