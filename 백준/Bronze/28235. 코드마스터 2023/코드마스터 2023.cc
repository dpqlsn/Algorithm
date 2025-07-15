#include <stdio.h>
#include <string.h>

int main() {
    char a[20];
    scanf("%s", a);

    if (strcmp(a, "SONGDO") == 0) printf("HIGHSCHOOL");
    else if (strcmp(a, "CODE") == 0) printf("MASTER");
    else if (strcmp(a, "2023") == 0) printf("0611");
    else if (strcmp(a, "ALGORITHM") == 0) printf("CONTEST");

    return 0;
}
