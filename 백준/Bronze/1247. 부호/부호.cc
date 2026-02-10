#include <stdio.h>

int main() {
    for (int k = 0; k < 3; k++) {
        int N = 0;
        long long sum = 0, flow = 0;
        scanf("%d", &N);
        for (int i = 0; i < N; i++) {
            long long temp;
            scanf("%lld", &temp);
            long long prev = sum;
            sum = sum + temp;
            if (temp > 0 && prev > 0 && sum < 0) flow++;
            if (temp < 0 && prev < 0 && sum > 0) flow--;
        }
        if (flow == 0) {
            if (sum == 0) printf("0\n");
            else printf("%c\n", sum > 0 ? '+' : '-');
        } else {
            printf("%c\n", flow > 0 ? '+' : '-');
        }
    }
    return 0;
}