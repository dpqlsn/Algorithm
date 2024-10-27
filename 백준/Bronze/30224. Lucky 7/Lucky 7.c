#include <stdio.h>
int main() {
    char n[100];
    scanf("%s", n);
    
    int num = 0;
    for (int i = 0; n[i] != '\0'; i++) {
        num = num * 10 + (n[i] - '0');
    }

    int s = 0;
    for (int i = 0; n[i] != '\0'; i++) {
        if (n[i] == '7') {
            s = 1;
            break;
        }
    }

    if (!s && num % 7 != 0) {
        printf("0");
    } else if (!s && num % 7 == 0) {
        printf("1");
    } else if (s && num % 7 != 0) {
        printf("2");
    } else if (s && num % 7 == 0) {
        printf("3");
    }
    return 0;
}