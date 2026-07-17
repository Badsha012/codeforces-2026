#include <iostream>
#include <set>

using namespace std;

void solve() {
    int n;
    cin >> n;
    set<int> unique_elements;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        unique_elements.insert(x);
    }
    cout << unique_elements.size() << "\n";
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