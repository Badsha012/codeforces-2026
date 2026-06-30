#include <iostream>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    // If n is odd, no configuration is possible because legs must be even.
    if (n % 2 != 0) {
        cout << 0 << "\n";
    } else {
        // The number of choices for cows ranges from 0 to n / 4.
        cout << (n / 4) + 1 << "\n";
    }
}

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}B. Following the String