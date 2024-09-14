#include <stdio.h>
int main() {
    int off[4], on[4];
    int current = 0, max = 0;

    for (int i = 0; i < 4; i++) {
        scanf("%d %d", &off[i], &on[i]);
    }

    for (int i = 0; i < 4; i++) {
        current -= off[i];
        current += on[i];
        
        if (current > max) {
            max = current;
        }
    }
    printf("%d", max);
    return 0;
}