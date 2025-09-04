#include <stdio.h>

int main() {
    int case_num = 1;
    int n, x;

    while (1) {
        scanf("%d", &n);
        if (n == 0) break;

        for (int i = 0; i < n; i++) {
            scanf("%d", &x);
        }

        printf("Case %d: Sorting... done!\n", case_num);
        case_num++;
    }

    return 0;
}
