#include <stdio.h>
#include <string.h>

int main() {
    char s[1001];
    scanf("%s", s);
    
    int count = strlen(s) - 2;
    
    printf("h");
    for(int i = 0; i < count * 2; i++) {
        printf("e");
    }
    printf("y");
    
    return 0;
}