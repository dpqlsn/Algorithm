#include <stdio.h>

int main() {
    int h1, m1, s1;
    int h2, m2, s2;

    scanf("%d : %d : %d", &h1, &m1, &s1);
    scanf("%d : %d : %d", &h2, &m2, &s2);

    int start = h1 * 3600 + m1 * 60 + s1;
    int end = h2 * 3600 + m2 * 60 + s2;

    int diff = end - start;

    if (diff < 0) {
        diff += 24 * 3600;
    }

    printf("%d\n", diff);

    return 0;
}