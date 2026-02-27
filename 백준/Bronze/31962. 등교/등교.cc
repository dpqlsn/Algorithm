#include <stdio.h>

int main() {
    int N, X;
    scanf("%d %d", &N, &X);

    int S, T;
    int max = -1;

    for(int i = 0; i < N; i++) {
        scanf("%d %d", &S, &T);
        if(S + T <= X) {
            if(S > max) {
                max = S;
            }
        }
    }
    printf("%d\n", max);
    return 0;
}