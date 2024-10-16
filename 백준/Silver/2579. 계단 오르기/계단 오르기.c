#include <stdio.h>

int memo[301] = {0};
int stairs[301] = {0};

int max(int a, int b) {
    return a > b ? a : b;
}

int repeat(int a) {
    if (a < 0) return 0;
    if (a == 1) return stairs[1];
    if (a == 2) return stairs[1] + stairs[2];
    if (memo[a] != 0) return memo[a];
    return memo[a] = stairs[a] + max(repeat(a - 2), repeat(a - 3) + stairs[a - 1]);
}

int main() {
    int a;
    scanf("%d", &a);
    for (int i = 1; i <= a; ++i) {
        scanf("%d", &stairs[i]);
    }
    printf("%d\n", repeat(a));
    return 0;
}
