#include <stdio.h>
#include <string.h>

int main() {
    char s[20];
    while (1) {
        if (scanf("%s", s) != 1) break;
        if (strcmp(s, "end") == 0) break;
        if (strcmp(s, "animal") == 0)
            printf("Panthera tigris\n");
        else if (strcmp(s, "tree") == 0)
            printf("Pinus densiflora\n");
        else if (strcmp(s, "flower") == 0)
            printf("Forsythia koreana\n");
    }
    return 0;
}