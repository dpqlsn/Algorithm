#include <stdio.h>

int main() {
    int L, P;
    int a[5];
    scanf("%d %d", &L, &P);
    int real = L * P;
    
    for(int i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }
    
    for(int i = 0; i < 5; i++) {
        printf("%d ", a[i] - real);
    }
    
    return 0;
}