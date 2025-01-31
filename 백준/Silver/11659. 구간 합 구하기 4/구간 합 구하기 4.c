#include <stdio.h>
int main() {
    int n, m;
    int arr[100001] = {0};

    scanf("%d %d", &n, &m);

    for (int i = 1; i <= n; i++) {
        int num;
        scanf("%d", &num);
        arr[i] = arr[i - 1] + num;
    }

    for (int i = 0; i < m; i++) {
        int l, r;
        scanf("%d %d", &l, &r);
        printf("%d\n", arr[r] - arr[l - 1]);
    }

    return 0;
}
