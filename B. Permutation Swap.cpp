#include <bits/stdc++.h>
using namespace std;

// Function to find the greatest common divisor
int gcd(int a, int b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

void solve() {
    int n;
    cin >> n;
    
    int ans = 0;
    for (int i = 1; i <= n; ++i) {
        int p;
        cin >> p;
        int diff = abs(i - p);
        ans = gcd(ans, diff);
    }
    
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