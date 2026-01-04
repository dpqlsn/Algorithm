#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int found = 0;

    if (N >= 1 && N <= 9) {
        found = 1;
    } else {
        for (int A = 2; A <= 9 && !found; A++) {
            for (int B = 1; B <= 9; B++) {
                if (A * B == N) {
                    found = 1;
                    break;
                }
            }
        }
    }

    printf("%d\n", found);
    return 0;
}