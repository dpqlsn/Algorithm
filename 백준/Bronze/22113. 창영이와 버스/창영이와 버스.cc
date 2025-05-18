#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    vector<int> bus_schedule(M);
    for (int i = 0; i < M; ++i) {
        cin >> bus_schedule[i];
    }

    unordered_map<int, int> destination_dict;
    for (int i = 0; i < M - 1; ++i) {
        int origin = bus_schedule[i];
        int destination = bus_schedule[i + 1];
        destination_dict[origin] = destination;
    }

    int total_transfer_fee = 0;

    for (int bus_number = 1; bus_number <= N; ++bus_number) {
        vector<int> transfer_fee_list(N + 1);
        for (int i = 1; i <= N; ++i) {
            cin >> transfer_fee_list[i];
        }

        if (destination_dict.find(bus_number) == destination_dict.end()) {
            continue;
        }

        int index = destination_dict[bus_number];
        total_transfer_fee += transfer_fee_list[index];

        destination_dict.erase(bus_number);
    }

    cout << total_transfer_fee << '\n';
    return 0;
}
