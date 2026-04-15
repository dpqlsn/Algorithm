#include <stdio.h>

int main() {
    int N, count = 0;
    char arr[10000];
    char target;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf(" %c", &arr[i]);
    }

    scanf(" %c", &target);

    for (int i = 0; i < N; i++) {
        if (arr[i] == target) {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}