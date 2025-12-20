#include <stdio.h>

int main() {
    int sh, sm, ss, eh, em, es;
    for (int i = 0; i < 3; i++) {
        scanf("%d %d %d %d %d %d", &sh, &sm, &ss, &eh, &em, &es);
        int start = sh * 3600 + sm * 60 + ss;
        int end = eh * 3600 + em * 60 + es;
        int diff = end - start;
        int h = diff / 3600;
        int m = (diff % 3600) / 60;
        int s = diff % 60;
        printf("%d %d %d\n", h, m, s);
    }
    return 0;
}