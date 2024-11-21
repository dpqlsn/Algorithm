#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int b[101];
    for (int i = 1; i <= n; i++) {
        b[i] = i;
    }

    for (int t = 0; t < m; t++) {
        int i, j;
        scanf("%d %d", &i, &j);

        while (i < j) {
            int temp = b[i];
            b[i] = b[j];
            b[j] = temp;
            i++;
            j--;
        }
    }

    for (int i = 1; i <= n; i++) {
        printf("%d ", b[i]);
    }

    return 0;
}
