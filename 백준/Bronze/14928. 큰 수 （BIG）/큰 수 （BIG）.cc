#include <stdio.h>
#include <string.h>

int main(void) {
    char a[1000005]; 
    scanf("%s", a);

    int ans = 0;
    for (int i = 0; i < strlen(a); i++) {
        ans = (ans * 10 + (a[i] - '0')) % 20000303;
    }

    printf("%d\n", ans);
    return 0;
}
