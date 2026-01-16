#include <stdio.h>

int main() {
    int H1, B1, H2, B2;
    scanf("%d %d", &H1, &B1);
    scanf("%d %d", &H2, &B2);

    int score1 = H1 * 3 + B1;
    int score2 = H2 * 3 + B2;

    if (score1 == score2) {
        printf("NO SCORE");
    } else if (score1 > score2) {
        printf("1 %d", score1 - score2);
    } else {
        printf("2 %d", score2 - score1);
    }

    return 0;
}