#include <stdio.h>
#include <string.h>

int main() {
    int N;
    char S[501];
    int count = 0;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%s", S);

        if (strstr(S, "01") != NULL || strstr(S, "OI") != NULL) {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}
