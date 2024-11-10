#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    printf("int a;\n");
    
    for (int i = 1; i <= n; i++) {
        printf("int ");
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("ptr");
        if (i != 1) printf("%d", i);
        printf(" = ");
        if (i == 1) {
            printf("&a;\n");
        } else {
            printf("&ptr");
            if (i == 2) {
                printf(";\n");
            } else {
                printf("%d;\n", i - 1);
            }
        }
    }

    return 0;
}