#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    char *label = "WelcomeToSMUPC";
    int length = 14;

    printf("%c\n", label[(N - 1) % length]);

    return 0;
}
