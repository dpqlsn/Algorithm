#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        char password[101];
        scanf("%s", password);
        int length = 0;
        while (password[length] != ' ') length++;
        
        if (length >= 6 && length <= 9) {
            printf("yes\n");
        } else {
            printf("no\n");
        }
    }
    
    return 0;
}
