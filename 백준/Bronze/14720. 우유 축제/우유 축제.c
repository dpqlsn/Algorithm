#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int stores[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &stores[i]);
    }

    int maxCount = 0;
    int nextMilk = 0;

    for (int i = 0; i < n; i++) {
        if (stores[i] == nextMilk) {
            maxCount++;
            nextMilk = (nextMilk + 1) % 3;
        }
    }

    printf("%d", maxCount);
    return 0;
}
