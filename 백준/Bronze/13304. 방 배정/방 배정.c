#include <stdio.h>
int main() {
    int n, k;
    int student[5] = {0, 0, 0, 0, 0};
    int s, y, i;
    int room = 0;

    scanf("%d %d", &n, &k);

    for (i = 0; i < n; i++) {
        scanf("%d %d", &s, &y);
        if (y == 1 || y == 2) {
            student[0]++;
        } else if (s == 0 && (y == 3 || y == 4)) {
            student[1]++;
        } else if (s == 1 && (y == 3 || y == 4)) {
            student[2]++;
        } else if (s == 0 && (y == 5 || y == 6)) {
            student[3]++;
        } else {
            student[4]++;
        }
    }

    for (i = 0; i < 5; i++) {
        room += student[i] / k;
        if (student[i] % k != 0) {
            room++;
        }
    }

    printf("%d", room);

    return 0;
}