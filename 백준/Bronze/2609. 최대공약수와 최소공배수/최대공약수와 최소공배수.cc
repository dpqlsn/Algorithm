#include <stdio.h>

int gcd(int a, int b) {
    int c = a % b;
    while (c != 0) {
        a = b;
        b = c;
        c = a % b;
    }
    return b;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    printf("%d\n%d\n", gcd(n1, n2), lcm(n1, n2));
    return 0;
}
