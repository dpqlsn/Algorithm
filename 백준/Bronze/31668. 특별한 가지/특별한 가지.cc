#include <stdio.h>

int main() {
    int N, M, K;
    scanf("%d", &N);
    scanf("%d", &M);
    scanf("%d", &K);
    
    printf("%d\n", (M / N) * K);
    
    return 0;
}