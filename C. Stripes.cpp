#include <iostream>
#include <vector>
#include <string>

using namespace std;

void solve() {
    vector<string> grid(8);
    bool red_found = false;

    for (int i = 0; i < 8; ++i) {
        cin >> grid[i];
        if (grid[i] == "RRRRRRRR") {
            red_found = true;
        }
    }

    if (red_found) {
        cout << "R\n";
    } else {
        cout << "B\n";
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