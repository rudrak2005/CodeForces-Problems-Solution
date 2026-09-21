#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n, k;
        cin >> n >> k;
 
        vector<int> a(n);
        for (int &x : a) {
            cin >> x;
        }
 
        vector<int> spf(n + 1);
 
        for (int i = 0; i <= n; i++) {
            spf[i] = i;
        }
 
        for (int i = 2; i * i <= n; i++) {
            if (spf[i] == i) {
                for (int j = i * i; j <= n; j += i) {
                    if (spf[j] == j) {
                        spf[j] = i;
                    }
                }
            }
        }
 
        vector<long long> dp(n + 1, 0);
 
        for (int x = k + 1; x <= n; x++) {
            int y = x;
            long long best = LLONG_MAX;
 
            while (y > 1) {
                int p = spf[y];
 
                best = min(best, 1LL + 1LL * p * dp[x / p]);
 
                while (y % p == 0) {
                    y /= p;
                }
            }
 
            dp[x] = best;
        }
 
        long long answer = 0;
 
        for (int x : a) {
            answer += dp[x];
        }
 
        cout << answer << '
';
    }
 
    return 0;
}