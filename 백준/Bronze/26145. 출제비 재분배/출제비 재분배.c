#include <stdio.h>
int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int s[n], result[n + m];

    for (int i = 0; i < n; i++) {
        scanf("%d", &s[i]);
        result[i] = s[i];
    }

    for (int i = n; i < n + m; i++) {
        result[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0, tij; j < n + m; j++) {
            scanf("%d", &tij);
            result[i] -= tij;
            result[j] += tij;
        }
    }

    for (int i = 0; i < n + m; i++) {
        printf("%d ", result[i]);
    }
    return 0;
}