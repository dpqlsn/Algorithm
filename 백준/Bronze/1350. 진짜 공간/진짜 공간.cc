#include <stdio.h>
#include <stdlib.h>

typedef long long ll;

int main()
{
    int N, fileSize;
    ll cnt = 0;

    scanf("%d", &N);
    ll *v = (ll *)malloc(N * sizeof(ll));

    for (int i = 0; i < N; i++)
    {
        scanf("%lld", &v[i]);
    }

    scanf("%d", &fileSize);

    for (int i = 0; i < N; i++)
    {
        cnt += v[i] / fileSize + (v[i] % fileSize != 0);
    }

    printf("%lld", fileSize * cnt);

    free(v);
    return 0;
}
