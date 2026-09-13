#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<long long> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    long long max_b = 0;
    long long current_sum_a = 0;
    long long max_total_exp = 0;

    // Iterate through all possible prefix lengths up to min(n, k)
    for (int i = 0; i < min(n, k); i++) {
        current_sum_a += a[i];
        max_b = max(max_b, b[i]);
        
        long long remaining_quests = k - (i + 1);
        long long total_exp = current_sum_a + remaining_quests * max_b;
        
        max_total_exp = max(max_total_exp, total_exp);
    }

    cout << max_total_exp << "\n";
}

int main() {
    // Optimize standard input/output streams for fast execution
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}