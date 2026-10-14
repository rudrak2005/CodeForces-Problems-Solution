#include <bits/stdc++.h>
using namespace std;
 
int solve(const string& s) {
    bool same = 0, alt = 0;
 
    for (size_t i = 1; i + 1 < s.size(); ++i) {
        if (s[i - 1] == s[i + 1]) {
            if (s[i] == s[i - 1]) same = 1;
            else alt = 1;
 
            if (same && alt) return 3;
        }
    }
    return 1 + same + alt;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        string s;
        cin >> s;
        cout << solve(s) << '
';
    }
}