#include <iostream>

using namespace std;

void solve() {
    long long n;
    cin >> n;
    
    // If n is odd or less than 4, it's impossible
    if (n < 4 || n % 2 != 0) {
        cout << -1 << "\n";
        return;
    }
    
    long long min_buses = (n + 5) / 6;
    long long max_buses = n / 4;
    
    cout << min_buses << " " << max_buses << "\n";
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