#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    getchar();

    char line[1001];

    for(int i = 0; i < n; i++) {
        fgets(line, sizeof(line), stdin);
        line[strcspn(line, "\n")] = '\0';

        int len = strlen(line);
        if(len == 0 || line[len - 1] != '.') {
            printf("%s.\n", line);
        } else {
            printf("%s\n", line);
        }
    }

    return 0;
}