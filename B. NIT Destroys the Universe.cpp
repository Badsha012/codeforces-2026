#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int l = 0, r = n - 1;
    while (l < n && a[l] == 0) {
        l++;
    }
    while (r >= 0 && a[r] == 0) {
        r--;
    }

    // যদি পুরো অ্যারে জিরো হয়
    if (l > r) {
        cout << 0 << "\n";
        return;
    }


    bool has_zero = false;
    for (int i = l; i <= r; i++) {
        if (a[i] == 0) {
            has_zero = true;
            break;
        }
    }

    if (has_zero) {
        cout << 2 << "\n";
    } else {
        cout << 1 << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}