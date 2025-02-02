#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 5 * N; j++) {
            printf("@");
        }
        printf("\n");
    }
    
    for (int i = 0; i < N * 3; i++) {
        for (int j = 0; j < N; j++) {
            printf("@");
        }
        for (int j = 0; j < N * 3; j++) {
            printf(" ");
        }
        for (int j = 0; j < N; j++) {
            printf("@");
        }
        printf("\n");
    }
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 5 * N; j++) {
            printf("@");
        }
        printf("\n");
    }
    
    return 0;
}
