#include <stdio.h>
int main() {
    int n, sum = 0, num;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        sum += num;
    }

    printf("%d\n", sum);

    return 0;
}