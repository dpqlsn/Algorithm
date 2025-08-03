#include <stdio.h>
#include <string.h>

int main() {
    char n[5];
    char a[5] = "";
    scanf("%s", n);

    for (int i = 0; i < 4; i++) {
        switch (n[i]) {
            case 'E': a[i] = 'I'; break;
            case 'I': a[i] = 'E'; break;
            case 'S': a[i] = 'N'; break;
            case 'N': a[i] = 'S'; break;
            case 'T': a[i] = 'F'; break;
            case 'F': a[i] = 'T'; break;
            case 'P': a[i] = 'J'; break;
            case 'J': a[i] = 'P'; break;
        }
    }
    a[4] = '\0';

    printf("%s\n", a);
    return 0;
}
