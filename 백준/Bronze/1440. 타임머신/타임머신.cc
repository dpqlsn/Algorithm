#include <stdio.h>

int main() {
    int t[3], h[] = {1,2,3,4,5,6,7,8,9,10,11,12}, r = 0;

    scanf("%d:%d:%d", &t[0], &t[1], &t[2]);

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                if (i != j && j != k && k != i) {
                    int a = t[i], b = t[j], c = t[k], v = 0;
                    for (int x = 0; x < 12; x++) {
                        if (a == h[x]) {
                            v = 1;
                            break;
                        }
                    }
                    if (v && b >= 0 && b < 60 && c >= 0 && c < 60) r++;
                }
            }
        }
    }

    printf("%d\n", r);
    return 0;
}
