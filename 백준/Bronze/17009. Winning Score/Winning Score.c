#include <stdio.h>
int c() {
    int score = 0, n;
    for (int i = 3; i > 0; i--) {
        scanf("%d", &n);
        score += n * i;
    }
    return score;
}

int main() {
    int a = c();
    int b = c();

    if (a > b) {
        printf("A");
    } else if (a < b) {
        printf("B");
    } else {
        printf("T");
    }

    return 0;
}