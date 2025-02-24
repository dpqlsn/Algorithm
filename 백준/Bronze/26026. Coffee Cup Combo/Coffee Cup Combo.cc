#include <iostream>
#include <string>
using namespace std;

int max(int n, const string& s) {
    int a = 0;
    int coffee = 0;
    
    for (int i = 0; i < n; ++i) {
        if (s[i] == '1') {
            coffee = 2;
            a++;
        } else if (coffee > 0) {
            coffee--;
            a++;
        }
    }
    
    return a;
}

int main() {
    int n;
    string s;
    
    cin >> n >> s;
    cout << max(n, s) << endl;
    
    return 0;
}
