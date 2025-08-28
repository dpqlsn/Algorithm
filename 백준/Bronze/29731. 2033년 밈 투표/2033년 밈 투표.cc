#include <stdio.h>
#include <string.h>

int main(void)
{
    int N;
    int isYes = 0;
    char str[101];
    const char *promises[] = {
        "Never gonna give you up",
        "Never gonna let you down",
        "Never gonna run around and desert you",
        "Never gonna make you cry",
        "Never gonna say goodbye",
        "Never gonna tell a lie and hurt you",
        "Never gonna stop"};
    int promiseCount = sizeof(promises) / sizeof(promises[0]);

    scanf("%d", &N);
    getchar();

    while (N--)
    {
        if (fgets(str, sizeof(str), stdin) == NULL)
            break;

        size_t len = strlen(str);
        if (len > 0 && str[len - 1] == '\n')
            str[len - 1] = '\0';

        int found = 0;
        for (int i = 0; i < promiseCount; i++)
        {
            if (strcmp(promises[i], str) == 0)
            {
                found = 1;
                break;
            }
        }

        if (!found)
            isYes = 1;
    }

    printf("%s", isYes ? "Yes" : "No");

    return 0;
}
