#include <iostream>

using namespace std;

void solve() {
    long long n;
    cin >> n;
    // A regular n-sided polygon is "beautiful" if and only if n is a multiple of 4.
    if (n % 4 == 0) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}