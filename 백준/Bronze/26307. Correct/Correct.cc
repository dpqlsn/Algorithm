#include <iostream>

using namespace std;

int main() {
    int HH, MM;
    cin >> HH >> MM;

    int Time = (HH - 9) * 60 + MM;

    cout << Time << endl;

    return 0;
}