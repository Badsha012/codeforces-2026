#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    if (n % 2 == 0) {
        // If n is even, we can do it in 1 operation
        cout << 1 << "\n";
        cout << 1 << " " << n << "\n";
    } else {
        // If n is odd, we can do it in 2 operations:
        // 1. Make the first n-1 elements 0 using two operations or similar?
        // Standard solution for odd n:
        // Op 1: [1, n-1]
        // Op 2: [1, n-1] -> makes first n-1 elements 0
        // Op 3: [n-1, n] -> wait, let's use the 2-step trick:
        // Op 1: [1, n-1]
        // Op 2: [2, n]
        // Op 3: [1, 2]
        // Op 4: [3, n] ...
        
        // Simpler editorial approach for odd n:
        // 2 operations:
        // 1. [1, n-1]
        // 2. [1, n-1] (now 1..n-1 are 0)
        // 3. [n-1, n] twice? No, let's output 2 operations using [1, n-1] and [2, n] or similar.
        cout << 2 << "\n";
        cout << 1 << " " << n - 1 << "\n";
        cout << 1 << " " << n << "\n";
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