#include <stdio.h>
int p(int num) {
    if (num < 2) return 0; 
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0; 
    }
    return 1;
}

int main() {
    int n, count = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);
        if (p(num)) {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}
