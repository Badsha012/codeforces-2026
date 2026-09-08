#include <iostream>
using namespace std;

void solve() {
    long long x;
    cin >> x;
    // To maximize min(x, y), we can choose y = x + 1 (if within bounds) 
    // or cap it at the upper limit 67.
    if (x < 67) {
        cout << x + 1 << "\n";
    } else {
        cout << 67 << "\n";
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