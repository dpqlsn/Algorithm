#include <iostream>
#include <string>

using namespace std;

int main() {
    string S;
    cin >> S;
    
    string suffix = "driip";
    if (S.size() >= suffix.size() && S.substr(S.size() - suffix.size()) == suffix) {
        cout << "cute" << endl;
    } else {
        cout << "not cute" << endl;
    }
    
    return 0;
}