#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<vector<string>> words(3, vector<string>(n));
    map<string, int> word_count;
    
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> words[i][j];
            word_count[words[i][j]]++;
        }
    }
    
    vector<int> scores(3, 0);
    
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < n; ++j) {
            string w = words[i][j];
            if (word_count[w] == 1) {
                scores[i] += 3;
            } else if (word_count[w] == 2) {
                scores[i] += 1;
            }
            // If word_count[w] == 3, add 0 points
        }
    }
    
    cout << scores[0] << " " << scores[1] << " " << scores[2] << "\n";
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