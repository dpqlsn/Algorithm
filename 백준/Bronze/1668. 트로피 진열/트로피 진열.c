#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    int lst[50];
    for (int i = 0; i < n; i++) {
        scanf("%d", &lst[i]);
    }

    int lc = 0, rc = 0;
    int lm = 0, rm = 0;

    for (int i = 0; i < n; i++) {
        if (lst[i] > lm) {
            lm = lst[i];
            lc++;
        }
    }

    for (int i = n - 1; i >= 0; i--) {
        if (lst[i] > rm) {
            rm = lst[i];
            rc++;
        }
    }

    printf("%d\n", lc);
    printf("%d\n", rc);

    return 0;
}