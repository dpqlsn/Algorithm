#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    string str;
    vector<int> vec;

    for(int i = 0; i < 3; i++) {
        int n;
        cin >> n;
        vec.push_back(n);
    }

    cin >> str;
    sort(vec.begin(), vec.end());

    int len = str.length();

    for(int i = 0; i < len; i++) {
        if(str[i] == 'C') {
            cout << vec[2] << " ";
        } else if(str[i] == 'A') {
            cout << vec[0] << " ";
        } else {
            cout << vec[1] << " ";
        }
    }

    return 0;
}
