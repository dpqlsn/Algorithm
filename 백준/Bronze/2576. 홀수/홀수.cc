#include <stdio.h>

int main() {
    int num;
    int sum = 0;
    int min = 101;
    int found = 0;

    for (int i = 0; i < 7; i++) {
        scanf("%d", &num);
        if (num % 2 == 1) { 
            sum += num;
            if (num < min) {
                min = num;
            }
            found = 1;
        }
    }

    if (found) {
        printf("%d\n%d\n", sum, min);
    } else {
        printf("-1\n");
    }

    return 0;
}
