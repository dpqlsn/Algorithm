#pragma GCC target("avx,avx2,fma")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define int int64_t
using namespace std;

char DB[5][6] = {
  "@@@ @",
  "@ @ @",
  "@ @ @",
  "@ @ @",
  "@ @@@",
};

int32_t main(){
  fastio;
  int n; cin >> n;
  const int sz = 5*n;
  for(int i = 0; i < sz; i++,puts(""))
    for(int j = 0; j < sz; j++)putchar(DB[i/n][j/n]);
}
