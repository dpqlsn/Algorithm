#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char s[51];
    
    scanf("%d", &n);
    scanf("%s", s);
    
    int c = 1;
    int l = strlen(s);
    
    for (int i = 0; i < l; i++) {
        if (s[i] == 'S') {
            c++;
        } else if (s[i] == 'L') {
            c++;
            i++;
        }
    }
    
    int m = c < n ? c : n;
    printf("%d", m);
    
    return 0;
}