#include <stdio.h>
#include <stdbool.h>

#define MAX_N 10000

int main() {
    int N, Q;
    scanf("%d %d", &N, &Q);
    
    bool slots[MAX_N + 1] = {false}; // 1-based index 사용
    
    for (int i = 0; i < Q; i++) {
        int L, I;
        scanf("%d %d", &L, &I);
        
        for (int j = L; j <= N; j += I) {
            if (!slots[j]) {
                slots[j] = true;
            }
        }
    }
    
    int empty_count = 0;
    for (int i = 1; i <= N; i++) {
        if (!slots[i]) {
            empty_count++;
        }
    }
    
    printf("%d\n", empty_count);
    return 0;
}
