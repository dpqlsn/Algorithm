#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b, c, d, t;
    cin >> a >> b >> c >> d >> t;
    
    int distance = abs(c - a) + abs(d - b);
    
    if (distance <= t && (t - distance) % 2 == 0) {
        cout << "Y" << endl;
    } else {
        cout << "N" << endl;
    }
    
    return 0;
}