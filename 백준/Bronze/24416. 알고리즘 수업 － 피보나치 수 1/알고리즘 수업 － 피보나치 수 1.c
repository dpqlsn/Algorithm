#include <stdio.h>
int c1 = 0;
int c2 = 0;

int fib(int n) {
    if (n == 1 || n == 2) {
        c1++;
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}

int fibo(int n) {
    int f[41] = { 0, 1, 1 };
    for (int i = 3; i <= n; i++) {
        f[i] = f[i - 1] + f[i - 2];
        c2++;
    }
    return f[n];
}

int main() {
    int n;
    scanf("%d", &n);

    fib(n);
    fibo(n);

    printf("%d %d\n", c1, c2);
    return 0;
}
