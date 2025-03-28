#include <stdio.h>

int main() {
    int n, a[50];
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            for (int k = 0; k < n; k++) {
                if (k == i || k == j) continue;
                if ((a[i] - a[j]) % a[k] != 0) {
                    printf("no\n");
                    return 0;
                }
            }
        }
    }
    
    printf("yes\n");
    return 0;
}