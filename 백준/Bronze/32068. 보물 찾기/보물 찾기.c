#include <stdio.h>
int main() {
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int L, R, S;
        scanf("%d %d %d", &L, &R, &S);

        int left = S - L;
        int right = R - S;

        if (left < right) {
            printf("%d\n", left * 2 + 1);
        } else {
            printf("%d\n", right * 2);
        }
    }

    return 0;
}