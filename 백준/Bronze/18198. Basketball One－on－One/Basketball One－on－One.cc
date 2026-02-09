#include <stdio.h>

int main(void) {
    char s[205];
    int scoreA = 0, scoreB = 0;

    scanf("%s", s);

    for (int i = 0; s[i] != '\0'; i += 2) {
        int point = s[i + 1] - '0';
        if (s[i] == 'A')
            scoreA += point;
        else
            scoreB += point;
    }

    if (scoreA > scoreB)
        printf("A");
    else
        printf("B");

    return 0;
}