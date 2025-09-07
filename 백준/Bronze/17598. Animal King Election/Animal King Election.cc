#include <stdio.h>
#include <string.h>

int main() {
    char s[10][10];
    int t = 0, l = 0;

    for (int i = 0; i < 9; i++) {
        scanf("%s", s[i]);
        if (strcmp(s[i], "Tiger") == 0) t++;
        else if (strcmp(s[i], "Lion") == 0) l++;
    }

    if (l < t) printf("Tiger");
    else printf("Lion");

    return 0;
}
