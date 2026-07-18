#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int n = stoi(s);

        if (n % 7 == 0) {
            cout << n << "\n";
            continue;
        }

        string ans = s;
        int bestDiff = 100;

        for (int x = 14; x <= 999; x += 7) {
            string y = to_string(x);

            if (y.size() != s.size()) continue;

            int diff = 0;
            for (int i = 0; i < (int)s.size(); i++) {
                if (s[i] != y[i]) diff++;
            }

            if (diff < bestDiff) {
                bestDiff = diff;
                ans = y;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}