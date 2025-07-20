#include <stdio.h>

int main() {
    int t[4];
    int sum = 0;

    for (int i = 0; i < 4; i++) {
        scanf("%d", &t[i]);
        sum += t[i];
    }

    sum += 300;

    if (sum <= 1800) printf("Yes");
    else printf("No");

    return 0;
}