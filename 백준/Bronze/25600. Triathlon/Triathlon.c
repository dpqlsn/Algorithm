#include <stdio.h>
int main() {
    int N, a, d, g;
    int max_value = 0, value;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d %d %d", &a, &d, &g);

        if (a == d + g) {
            value = a * (d + g) * 2;
        } else {
            value = a * (d + g);
        }

        if (value > max_value) {
            max_value = value;
        }
    }

    printf("%d\n", max_value);

    return 0;
}
