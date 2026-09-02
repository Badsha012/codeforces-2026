#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    // Maps to store the maximum consecutive count of each number in a and b
    unordered_map<int, int> max_a, max_b;

    // Calculate max consecutive occurrences in array a
    for (int i = 0; i < n; ) {
        int j = i;
        while (j < n && a[j] == a[i]) {
            j++;
        }
        int len = j - i;
        max_a[a[i]] = max(max_a[a[i]], len);
        i = j;
    }

    // Calculate max consecutive occurrences in array b
    for (int i = 0; i < n; ) {
        int j = i;
        while (j < n && b[j] == b[i]) {
            j++;
        }
        int len = j - i;
        max_b[b[i]] = max(max_b[b[i]], len);
        i = j;
    }

    int ans = 0;

    // Check all unique elements present in max_a
    for (auto& pair : max_a) {
        int val = pair.first;
        int len_a = pair.second;
        int len_b = max_b.count(val) ? max_b[val] : 0;
        ans = max(ans, len_a + len_b);
    }

    // Check all unique elements present in max_b that might not be in max_a
    for (auto& pair : max_b) {
        int val = pair.first;
        int len_b = pair.second;
        int len_a = max_a.count(val) ? max_a[val] : 0;
        ans = max(ans, len_a + len_b);
    }

    cout << ans << "\n";
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