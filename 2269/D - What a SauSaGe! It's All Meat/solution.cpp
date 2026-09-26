#include <bits/stdc++.h>
using namespace std;
 
bool possible(int x) {
    return __builtin_popcount(x) % 2 == 0;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n, q;
        cin >> n >> q;
 
        vector<int> a(n + 1);
        int ans = 0;
 
        for (int i = 1; i <= n; ++i) {
            cin >> a[i];
 
            if (possible(a[i]))
                ++ans;
        }
 
        cout << ans;
 
        while (q--) {
            int p, x;
            cin >> p >> x;
 
            if (possible(a[p]))
                --ans;
 
            a[p] = x;
 
            if (possible(a[p]))
                ++ans;
 
            cout << ' ' << ans;
        }
 
        cout << '
';
    }
 
    return 0;
}