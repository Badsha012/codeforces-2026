#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // Initial answer without doing anything (or rotating single elements)
    int max_diff = a[n - 1] - a[0];

    // Case 1: Keep a[0] fixed, rotate the subsegment [1, n-1] 
    // to bring any element to the last position.
    for (int i = 1; i < n; ++i) {
        max_diff = max(max_diff, a[i] - a[0]);
    }

    // Case 2: Keep a[n-1] fixed, rotate the subsegment [0, n-2] 
    // to bring any element to the first position.
    for (int i = 0; i < n - 1; ++i) {
        max_diff = max(max_diff, a[n - 1] - a[i]);
    }

    // Case 3: Rotate the entire array [0, n-1]. 
    // Any adjacent pair a[i] and a[i+1] can become the new (a[n-1], a[0]).
    for (int i = 0; i < n - 1; ++i) {
        max_diff = max(max_diff, a[i] - a[i + 1]);
    }

    cout << max_diff << "\n";
}

int main() {
    // Optimize standard I/O operations for performance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}