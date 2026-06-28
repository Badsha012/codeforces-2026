#include <iostream>
#include <string>

using namespace std;

void solve() {
    string m_str;
    cin >> m_str;
    
    // Convert the string to a long long integer to avoid overflow
    long long m = stoll(m_str);
    
    // The largest power of 10 less than or equal to m will have 
    // a '1' followed by (length of m - 1) zeros.
    long long greatest_power_of_10 = 1;
    for (size_t i = 0; i < m_str.length() - 1; ++i) {
        greatest_power_of_10 *= 10;
    }
    
    // The amount to decrease is the difference
    cout << m - greatest_power_of_10 << "\n";
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