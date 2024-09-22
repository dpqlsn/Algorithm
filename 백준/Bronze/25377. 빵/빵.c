#include <stdio.h>

int t(int n, int s[n][2]) {
    int m = 1000000000; 

    for (int i = 0; i < n; i++) {
        int a = s[i][0];
        int b = s[i][1];
        if (a <= b) {
            if (a < m) {
                m = a;
            }
        }
    }

    return (m != 1000000000) ? m : -1; 
}

int main() {
    int n;
    scanf("%d", &n);
    int s[n][2];

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &s[i][0], &s[i][1]);
    }

    int result = t(n, s);
    printf("%d\n", result);

    return 0;
}
