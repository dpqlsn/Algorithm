#include <stdio.h>
int main() {
    int n, i;
    int max = 0;
    float avg = 0, sum = 0;

    scanf("%d", &n);

    int s[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &s[i]);
    }

    for (i = 0; i < n; i++) {
        if (s[i] > max) {
            max = s[i];
        }
    }
    for (i = 0; i < n; i++) {
        sum += (float)s[i] / max * 100;
    }
    avg = sum / n;
    printf("%f\n", avg);

    return 0;
}
