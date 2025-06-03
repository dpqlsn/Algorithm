#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();

    for (int t = 0; t < n; ++t) {
        string line;
        getline(cin, line);

        string s;
        int i, j;
        size_t pos1 = line.find(' ');
        size_t pos2 = line.find(' ', pos1 + 1);

        s = line.substr(0, pos1);
        i = stoi(line.substr(pos1 + 1, pos2 - pos1 - 1));
        j = stoi(line.substr(pos2 + 1));

        string result = s.substr(0, i) + s.substr(j);
        cout << result << endl;
    }

    return 0;
}
