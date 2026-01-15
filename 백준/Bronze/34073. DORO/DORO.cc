#include <stdio.h>
#include <string.h>

int main() {
    int N;
    char line[101];

    scanf("%d\n", &N);
    fgets(line, sizeof(line), stdin);

    char *word = strtok(line, " ");
    while (word != NULL) {
        int len = strlen(word);
        if (word[len - 1] == '\n') {
            word[len - 1] = '\0';
        }
        printf("%sDORO", word);
        word = strtok(NULL, " ");
        if (word != NULL) {
            printf(" ");
        }
    }

    return 0;
}