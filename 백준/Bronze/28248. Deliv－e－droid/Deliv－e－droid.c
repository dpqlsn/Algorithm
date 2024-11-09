#include <stdio.h>
int main() {
    int P, C; 
    
    scanf("%d", &P);
    scanf("%d", &C);

    int score = (P * 50) - (C * 10);
    
    if (P > C) {
        score += 500;
    }

    printf("%d", score);

    return 0;
}