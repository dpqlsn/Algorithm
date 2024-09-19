#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int c[10001] = {0};

    for (int i = 0; i < n; i++) {
        int a;
        scanf("%d", &a);
        if (a >= 0 && a <= 10000) {
            c[a]++;
        } else {
            i--; 
        }
    }

    for (int i = 0; i <= 10000; i++) {
        for (int j = 0; j < c[i]; j++) {
            printf("%d\n", i); 
        }
    }

    return 0;
}