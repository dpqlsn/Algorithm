#include <stdio.h>

int main() {
    int N;
    char input[1001];

    scanf("%d", &N);
    getchar();

    for (int i = 0; i < N; i++) {
        fgets(input, sizeof(input), stdin);

        for (int j = 0; input[j]; j++) {
            if (input[j] == '\n') {
                input[j] = '\0';
                break;
            }
        }
        printf("%d. %s\n", i + 1, input);
    }
    return 0;
}