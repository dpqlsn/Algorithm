#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    for (int i = 1; i <= T; i++) {
        int N;
        scanf("%d", &N);
        const char *result;
        if (N > 4500) {
            result = "Round 1";
        } else if (N > 1000) {
            result = "Round 2";
        } else if (N > 25) {
            result = "Round 3";
        } else {
            result = "World Finals";
        }
        printf("Case #%d: %s\n", i, result);
    }
    return 0;
}