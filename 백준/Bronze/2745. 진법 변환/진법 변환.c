#include <stdio.h>
int main() {
    char n[100];
    int b, res = 0;
    scanf("%s %d", n, &b);
    
    int digit = 0;
    while (n[digit] != '\0') {
        digit++;
    }

    for (int i = 0; i < digit; i++) {
        char check = n[i];
        int value = 0;
        
        if ('A' <= check && check <= 'Z') {
            value = check - 'A' + 10;
        } else {
            value = check - '0';
        }
        
        int po = 1;
        for (int j = 0; j < (digit - i - 1); j++) {
            po *= b;
        }

        res += value * po;
    }
    printf("%d", res);
    return 0;
}