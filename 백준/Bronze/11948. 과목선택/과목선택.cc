#include <stdio.h>

int main() {
    int a, b, c, d, e, f;
    int sci[4], tmp, sum = 0;

    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);

    sci[0] = a;
    sci[1] = b;
    sci[2] = c;
    sci[3] = d;

    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (sci[i] < sci[j]) {
                tmp = sci[i];
                sci[i] = sci[j];
                sci[j] = tmp;
            }
        }
    }

    sum = sci[0] + sci[1] + sci[2];

    sum += (e > f) ? e : f;

    printf("%d\n", sum);

    return 0;
}