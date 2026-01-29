#include <stdio.h>

int main() {
    int K;
    scanf("%d", &K);

    for (int x = 1; x <= K; x++) {
        int n, s, d;
        scanf("%d %d %d", &n, &s, &d);

        long long total = 0;
        int maxDistance = s * d;

        for (int i = 0; i < n; i++) {
            int di, vi;
            scanf("%d %d", &di, &vi);
            if (di <= maxDistance) {
                total += vi;
            }
        }
        printf("Data Set %d:\n", x);
        printf("%lld\n\n", total);
    }
    return 0;
}