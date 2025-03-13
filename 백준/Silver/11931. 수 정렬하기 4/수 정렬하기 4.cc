#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + n, greater<long long>());

    for (int i = 0; i < n; i++) {
        cout << arr[i] << "\n";
    }

    return 0;
}
