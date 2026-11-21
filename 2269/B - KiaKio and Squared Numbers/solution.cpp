#include <bits/stdc++.h>
using namespace std;
 
long long step_fn(long long x) {
    long long s = 0;
    while (x > 0) {
        long long d = x % 10;
        s += d * d;
        x /= 10;
    }
    return s;
}
 
void solve() {
    int n;
    cin >> n;
 
    unordered_map<long long, long long> freq;
    freq.reserve(n * 2);
 
    for (int i = 0; i < n; ++i) {
        long long x;
        cin >> x;
        for (int iter = 0; iter < 1000; ++iter) {
            x = step_fn(x);
        }
        ++freq[x];
    }
 
    long long ans = 0;
    for (const auto& [val, c] : freq) {
        ans += c * (c - 1) / 2;
    }
 
    cout << ans << '
';
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}