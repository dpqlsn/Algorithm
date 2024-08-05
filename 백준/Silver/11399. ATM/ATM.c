#include <stdio.h>
void bubble(int arr[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main() {
    int n;
    scanf("%d", &n);
    int p[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &p[i]);
    }
    
    bubble(p, n);

    int total = 0, sum = 0;
    for (int i = 0; i < n; i++) {
        sum += p[i];
        total += sum;
    }
    printf("%d\n", total);
    return 0;
}