#include <stdio.h>

int main() {
    int cut;
    scanf("%d", &cut);

    int piece = 1;
    int a = 1;

    for (int i = 0; i < cut; i++) {
        if (i % 2 != 0) {
            a += 1;
        }
        piece += a;
    }

    printf("%d\n", piece);
    return 0;
}
