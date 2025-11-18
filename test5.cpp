#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        unordered_map<int, int> freq;

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            freq[a[i]]++;
        }

        int maxCaught = 0;
        // Try placing trap at multiples of each hop length
        for (int trap = 1; trap <= 10000; ++trap) {
            int count = 0;
            for (auto& [hop, f] : freq) {
                if (trap % hop == 0) {
                    count += f;
                }
            }
            if (trap != 0) {
                maxCaught = max(maxCaught, count);
            }
        }

        cout << maxCaught << '\n';
    }
}
