#include <stdio.h>
#include <string.h>

int main() {
    int Q;
    scanf("%d", &Q);
    
    while(Q--) {
        char S[1001];
        scanf("%s", S);
        
        int len = strlen(S);
        int count = 0;
        
        for(int i = 0; i <= len - 3; i++) {
            if(S[i] == 'W' && S[i+1] == 'O' && S[i+2] == 'W')
                count++;
        }
        printf("%d\n", count);
    }
    return 0;
}