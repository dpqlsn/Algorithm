#include <stdio.h>

int sum(int n) {
    int sum = n;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int small(int n) {
    for (int i = 1; i < n; i++) {
        if (sum(i) == n) return i;
    }
    return 0; 
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", small(n));
    return 0;
}
