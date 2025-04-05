#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 0; t < T; t++) {
        int n;
        scanf("%d", &n);
        int answer = 0;

        for (int i = 1; i < n; i++) {
            if (i * i <= n) {
                answer++;
            } else {
                break;
            }
        }

        printf("%d\n", answer);
    }

    return 0;
}
