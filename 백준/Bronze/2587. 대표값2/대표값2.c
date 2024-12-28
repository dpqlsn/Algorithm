#include <stdio.h>
int main() {
    int num[5];
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%d", &num[i]);
        sum += num[i];
    }

    int avg = sum / 5;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (num[j] > num[j + 1]) {
                int temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }

    int med = num[2];

    printf("%d\n", avg);
    printf("%d\n", med);

    return 0;
}