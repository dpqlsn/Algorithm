#include <stdio.h>
int main() {
    char arr[101];
    int length = 0;

    scanf("%s", arr);

    for (int i = 0; arr[i] != '\0'; i++) length++;

    printf("%d", length);

    return 0;
}