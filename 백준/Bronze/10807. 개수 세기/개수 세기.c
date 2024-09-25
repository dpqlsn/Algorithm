#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    int arr[100];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int v;
    scanf("%d", &v);

    int c = 0; 
    for (int i = 0; i < n; i++) {
        if (arr[i] == v) {
            c++;
        }
    }

    printf("%d", c);
    return 0;
}