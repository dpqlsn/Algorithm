#include <stdio.h>

char sol(int n) {
    n -= 1;
    if (n % 3 == 0) {
        return 'U';
    } else if (n % 3 == 1) {
        return 'O';
    } else {
        return 'S';
    }
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%c\n", sol(n));
    return 0;
}
