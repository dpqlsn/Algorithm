#include <stdio.h>

int main() {
    int wins = 0;
    char c;

    for (int i = 0; i < 6; i++) {
        scanf(" %c", &c);
        if (c == 'W') {
            wins++;
        }
    }

    if (wins == 5 || wins == 6) {
        printf("1");
    } else if (wins == 3 || wins == 4) {
        printf("2");
    } else if (wins == 1 || wins == 2) {
        printf("3");
    } else {
        printf("-1");
    }

    return 0;
}