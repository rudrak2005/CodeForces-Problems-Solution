#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
 
using namespace std;
using ll = long long;
 
void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    ll mn = a[0], mx = a[0];
    ll ans = a[0];
 
    for (int i = 1; i < n; i++) {
        
        ans = max(ans, a[i] + max(abs(mn), abs(mx)));
 
        
        ll next_mn = min({a[i], a[i] + mn, a[i] + 2 * mn});
        ll next_mx = max({a[i], a[i] + mx, a[i] + 2 * mx});
 
        mn = next_mn;
        mx = next_mx;
    }
 
    cout << ans << "
";
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