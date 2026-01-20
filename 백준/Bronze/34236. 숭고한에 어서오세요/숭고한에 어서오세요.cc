#include <stdio.h>

int main() {
    int N;
    int A[100];
    
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    
    int x = A[1] - A[0];
    printf("%d\n", A[N - 1] + x);
    
    return 0;
}