#include <stdio.h>
int main() {
    char chess[8][9];
    int cnt = 0;

    for (int i = 0; i < 8; i++) {
        scanf("%s", chess[i]);
    }

    for (int y = 0; y < 8; y++) {
        for (int x = 0; x < 8; x++) {
            if ((y % 2 == x % 2) && chess[y][x] == 'F') {
                cnt++;
            }
        }
    }

    printf("%d\n", cnt);

    return 0;
}