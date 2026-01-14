#include <stdio.h>

int main() {
    int by, bm, bd;
    int cy, cm, cd;

    scanf("%d %d %d", &by, &bm, &bd);
    scanf("%d %d %d", &cy, &cm, &cd);

    int man_age = cy - by;
    if (cm < bm || (cm == bm && cd < bd)) {
        man_age--;
    }

    int se_age = cy - by + 1;
    int yeon_age = cy - by;

    printf("%d\n", man_age);
    printf("%d\n", se_age);
    printf("%d\n", yeon_age);

    return 0;
}