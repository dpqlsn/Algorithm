#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int caseCnt; cin >> caseCnt;

  for (int i = 0; i < caseCnt; i++) {
    int population, time; cin >> population >> time;

    int birth = time / 4, death = time / 7;

    population += (birth - death);
    cout << population << "\n";
  }

  return 0;
}