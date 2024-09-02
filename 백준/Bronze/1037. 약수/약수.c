#include <stdio.h>
int main() {
    int c, n=0;
    scanf("%d", &c);
    
    int arr[c];
    
    for (int i = 0; i < c; i++) {
        scanf("%d", &arr[i]);
    }
    
    int min = arr[0];
    int max = arr[0];
    
    for (int i = 1; i < c; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    
    n = min * max;
    printf("%d", n);
    
    return 0;
}
