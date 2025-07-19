#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n, sum = 0;
    scanf("%d", &n);

    int v[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    qsort(v, n, sizeof(int), compare);

    for (int i = 0; i < n - 1; i++) {
        sum += v[i];
    }

    printf("%d", sum);
    return 0;
}
