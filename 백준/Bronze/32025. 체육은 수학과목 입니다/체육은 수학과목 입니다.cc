#include <iostream>
#include <algorithm> 
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    
    cout << (min(H, W) * 100 / 2) << endl;
    
    return 0;
}
