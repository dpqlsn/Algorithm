#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    int numbox = 1;
    int cnt = 1;

    while (num > numbox) {
        numbox += 6 * cnt;
        cnt++;
    }

    printf("%d\n", cnt);

    return 0;
}
