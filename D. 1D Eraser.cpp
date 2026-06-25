#include <iostream>
#include <string>
#include <vector>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int operations = 0;
    int i = 0;
    
    while (i < n) {
        if (s[i] == 'B') {
            operations++;
            i += k; // Skip the next k cells as they are wiped out by the eraser
        } else {
            i++;    // Move to the next cell if the current one is already white
        }
    }

    cout << operations << "\n";
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