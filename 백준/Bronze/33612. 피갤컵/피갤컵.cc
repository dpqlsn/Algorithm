#include <iostream>
using namespace std;
int m = 24288;
int N;
int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    cin >> N;

    m += N * 7;
    cout << (m / 12) << " " << (m % 12 + 1);
}