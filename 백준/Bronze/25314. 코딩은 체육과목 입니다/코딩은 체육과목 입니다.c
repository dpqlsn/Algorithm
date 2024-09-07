#include <stdio.h>
int main() {
    int n, count=0;
    scanf("%d", &n);
    count = n / 4;
    
    for (int i = 0; i < count; i++) {
        if (i > 0) {
            printf(" ");
        }
        printf("long");
    }
    printf(" int");
    return 0;
}
