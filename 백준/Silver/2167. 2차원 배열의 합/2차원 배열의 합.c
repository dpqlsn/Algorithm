#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    int **arr = (int**)malloc(sizeof(int*) * (a + 1));
    for (int i = 0; i <= a; i++) {
        arr[i] = (int*)malloc(sizeof(int) * (b + 1));
    }
    

    int **sum = (int**)malloc(sizeof(int*) * (a + 1));
    for (int i = 0; i <= a; i++) {
        sum[i] = (int*)malloc(sizeof(int) * (b + 1));
    }
    
    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= b; j++) {
            scanf("%d", &arr[i][j]);
            sum[i][j] = arr[i][j] + sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1];
        }
    }
    
    int k;
    scanf("%d", &k);
    
    while (k--) {
        int i, j, x, y;
        scanf("%d %d %d %d", &i, &j, &x, &y);
        int tot = sum[x][y] - sum[i - 1][y] - sum[x][j - 1] + sum[i - 1][j - 1];
        printf("%d\n", tot);
    }
    
    for (int i = 0; i <= a; i++) {
        free(arr[i]);
        free(sum[i]);
    }
    free(arr);
    free(sum);
    
    return 0;
}