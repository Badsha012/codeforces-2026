#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    int m = n * (n - 1) / 2;
    vector<int> b(m);
    for (int i = 0; i < m; ++i) {
        cin >> b[i];
    }

    // Step 1: Sort the array of minimums
    sort(b.begin(), b.end());

    // Step 2: Extract the elements of array 'a'
    vector<int> a;
    int index = 0;
    for (int i = 1; i < n; ++i) {
        a.push_back(b[index]);
        index += (n - i); // Jump past the comparisons for this element
    }
    
    // Step 3: The last element can be equal to the second-to-last (or up to 10^9)
    a.push_back(a.back());

    // Print the result
    for (int i = 0; i < n; ++i) {
        cout << a[i] << (i == n - 1 ? "" : " ");
    }
    cout << "\n";
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