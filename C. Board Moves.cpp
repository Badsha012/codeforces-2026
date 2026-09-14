#include <iostream>

using namespace std;

void solve() {
    long long n;
    cin >> n;
    if (n == 1) {
        cout << 0 << "\n";
        return;
    }
    long long m = (n - 1) / 2;
    // Formula: 8 * (m * (m + 1) * (2 * m + 1)) / 6
    long long ans = 8 * m * (m + 1) * (2 * m + 1) / 6;
    cout << ans << "\n";
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