#include <iostream>
 
using namespace std;
 
int main()
{
    int t, n, m;
    cin >> t;
 
    for (int i = 0; i < t; i++) {
        cin >> n >> m;
        cout << "Scenario #" << i + 1 << ":\n";
        cout << (long long)(m - n + 1) * (n + m) / 2 << "\n\n";
    }
 
    return 0;
}