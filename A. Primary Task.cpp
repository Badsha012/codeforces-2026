#include <iostream>
#include <string>

using namespace std;

void solve() {
    string s;
    cin >> s;
    
    // Condition 1: Must start with "10" and have length >= 3
    if (s.length() < 3 || s.substr(0, 2) != "10") {
        cout << "NO\n";
        return;
    }
    
    // Condition 2: The part after "10" cannot have a leading zero and must be >= 2
    string rem = s.substr(2);
    if (rem[0] == '0') {
        cout << "NO\n";
        return;
    }
    
    int x = stoi(rem);
    if (x >= 2) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
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