#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;
        int n = s.size();

        int cnt0 = 0, cnt1 = 0;
        for (char c : s) {
            if (c == '0') cnt0++;
            else cnt1++;
        }

        int used = 0;
        for (int i = 0; i < n; i++) {
            int want = (s[i] == '0' ? 1 : 0); // need the opposite
            if (want == 0 && cnt0 > 0) {
                cnt0--;
                used++;
            } else if (want == 1 && cnt1 > 0) {
                cnt1--;
                used++;
            } else {
                break; // can't continue
            }
        }

        cout << (n - used) << "\n";
    }

    return 0;
}
