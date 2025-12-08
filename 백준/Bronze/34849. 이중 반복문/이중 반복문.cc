#include <stdio.h>

int main() {
    long long N;
    scanf("%lld", &N);
    
    if (N * N <= 100000000) {
        printf("Accepted\n");
    } else {
        printf("Time limit exceeded\n");
    }
    
    return 0;
}