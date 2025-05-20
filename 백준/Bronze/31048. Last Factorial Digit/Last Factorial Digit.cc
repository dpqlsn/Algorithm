#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        long long temp = 1;
        for (int i = 1; i <= n; i++) {
            temp *= i;
        }
        
        cout << temp % 10 << endl;
    }

    return 0;
}

