#include <iostream>
#include <string>
#include <vector>

using namespace std;

void solve() {
    string s;
    char c;
    cin >> s >> c;
    
    // Check if the character c exists at an even 0-indexed position
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == c && i % 2 == 0) {
            cout << "YES\n";
            return;
        }
    }
    
    cout << "NO\n";
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