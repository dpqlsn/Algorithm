#include <stdio.h>

int main() {
    int output[2];
    for (int i = 0; i < 2; i++) {
        int t, f, s, p, c;
        scanf("%d %d %d %d %d", &t, &f, &s, &p, &c);
        output[i] = t * 6 + f * 3 + s * 2 + p + c * 2;
    }
    for (int i = 0; i < 2; i++) {
        printf("%d ", output[i]);
    }
    return 0;
}
