#include <stdio.h>

int main() {
    int d1, d2, d3;
    int sum = 0;
    int isbn[13] = {9,7,8,0,9,2,1,4,1,8};

    scanf("%d", &d1);
    scanf("%d", &d2);
    scanf("%d", &d3);

    isbn[10] = d1;
    isbn[11] = d2;
    isbn[12] = d3;

    for (int i = 0; i < 13; i++) {
        if (i % 2 == 0)
            sum += isbn[i];
        else
            sum += isbn[i] * 3;
    }

    printf("The 1-3-sum is %d\n", sum);
    return 0;
}