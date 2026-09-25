#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        char c;
        string s;
 
        cin >> n >> c >> s;
 
        int coins = 0;
 
        for (int l = 0, r = n - 1; l < r; ++l, --r) {
            if (s[l] == s[r])
                continue;
 
            coins += (s[l] == c || s[r] == c) ? 1 : 2;
        }
 
        cout << coins << '
';
    }
 
    return 0;
}