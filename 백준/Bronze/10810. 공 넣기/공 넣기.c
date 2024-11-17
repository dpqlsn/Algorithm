#include <stdio.h>
int main() {
    int N, M, k;
    scanf("%d %d", &N, &M);
    int arr[N];
    for (int i = 0; i < N; i++) arr[i] = 0;
    while (M--) {
        int i, j;
        scanf("%d %d %d", &i, &j, &k);
        for (int idx = i - 1; idx < j; idx++) arr[idx] = k;
    }
    for (int i = 0; i < N; i++) printf("%d ", arr[i]);
}