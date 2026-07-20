#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;

    int zeros = 0;
    int negatives = 0;

    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        if (val == 0) {
            zeros++;
        } else if (val == -1) {
            negatives++;
        }
    }

    int operations = 0;

    // Convert all zeros to 1 (1 operation each)
    operations += zeros;

    // If the count of -1s is odd, we need 2 operations to turn one -1 into 1
    if (negatives % 2 != 0) {
        operations += 2;
    }

    cout << operations << "\n";
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
}