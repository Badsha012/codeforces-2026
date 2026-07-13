#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long a, b;
        cin >> a >> b;

        if (a == b) {
            cout << "0 0\n";
            continue;
        }

        long long g = llabs(a - b);
        long long r = a % g;

        cout << g << " " << min(r, g - r) << "\n";
    }

    return 0;
}