#include <stdio.h>
void bubble(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    
    int x_list[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &x_list[i]);
    }
    
    bubble(x_list, n);
    
    printf("%d\n", x_list[k - 1]);
    
    return 0;
}