#include <stdio.h>

#define MAX 5000

int main() {
    int n, A, B, C;
    scanf("%d", &n);

    A = n, B = n + 1, C = -(n + 2);

    for (int a = -MAX; a <= MAX; a++) {
        if (a == 0 || A % a) continue;
        int c = A / a;

        for (int b = -MAX; b <= MAX; b++) {
            if (b == 0 || C % b) continue;
            int d = C / b;
            if (b * c + a * d == B) {
                printf("%d %d %d %d\n", a, b, c, d);
                return 0;
            }
        }
    }

    printf("-1\n");
}
