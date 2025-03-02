#include <stdio.h>
#include <string.h>

void swap(char *str, int a, int b) {
    char temp = str[a];
    str[a] = str[b];
    str[b] = temp;
}

int main() {
    char S[101];
    int T, A, B;
    
    scanf("%100s", S);
    scanf("%d", &T);
    
    for (int i = 0; i < T; i++) {
        scanf("%d %d", &A, &B);
        swap(S, A, B);
    }
    
    printf("%s\n", S);
    return 0;
}
