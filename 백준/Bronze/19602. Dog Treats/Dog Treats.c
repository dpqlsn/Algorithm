#include <stdio.h>
int main() {
    int S, M, L;
    
    scanf("%d", &S);
    scanf("%d", &M);
    scanf("%d", &L);
    
    int happiness_score = 1 * S + 2 * M + 3 * L;
    
    if (happiness_score >= 10) {
        printf("happy");
    } else {
        printf("sad");
    }
    
    return 0;
}