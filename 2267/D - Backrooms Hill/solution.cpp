#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> parity(n + 1);
 
        for (int i = 1; i <= n; ++i) {
            int x;
            cin >> x;
            parity[x] = i & 1;
        }
 
        bool dp[2] = {true, false};
 
        for (int v = 1; v < n; ++v) {
            bool nextDp[2] = {false, false};
 
            for (int p = 0; p < 2; ++p) {
                if (!dp[p])
                    continue;
 
                int leftParity = (p + 1) & 1;
                int rightParity = (n - v + 1 + p) & 1;
 
                if (parity[v] == leftParity) {
                    nextDp[leftParity] = true;
                }
 
                if (parity[v] == rightParity) {
                    nextDp[p] = true;
                }
            }
 
            dp[0] = nextDp[0];
            dp[1] = nextDp[1];
        }
 
        bool possible = false;
 
        for (int p = 0; p < 2; ++p) {
            if (dp[p] && parity[n] == ((p + 1) & 1)) {
                possible = true;
            }
        }
 
        cout << (possible ? "YES" : "NO") << '
';
    }
 
    return 0;
}