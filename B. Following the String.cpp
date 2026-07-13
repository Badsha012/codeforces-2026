#include <iostream>
#include <vector>
#include <string>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // Keep track of the current occurrence count for each character 'a' through 'z'
    vector<int> char_counts(26, 0);
    string s = "";

    for (int i = 0; i < n; ++i) {
        int target_count = a[i];
        
        // Find the first character that has appeared exactly target_count times so far
        for (int c = 0; c < 26; ++c) {
            if (char_counts[c] == target_count) {
                s += (char)'a' + c;
                char_counts[c]++; // Update the frequency of this character
                break;
            }
        }
    }
    
    cout << s << "\n";
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