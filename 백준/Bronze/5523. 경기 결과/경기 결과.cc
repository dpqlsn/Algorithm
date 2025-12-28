#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int aWins = 0, bWins = 0;
    for (int i = 0; i < N; i++) {
        int A, B;
        scanf("%d %d", &A, &B);
        if (A > B) aWins++;
        else if (B > A) bWins++;
    }

    printf("%d %d\n", aWins, bWins);
    return 0;
}