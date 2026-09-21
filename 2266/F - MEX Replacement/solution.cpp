#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
bool canCreate(
    ll target,
    const vector<pair<ll, ll>>& a,
    ll total,
    ll zeroCount
) {
    ll need = 1;
    ll unusedNonZero = total - zeroCount;
    ll cur = target - 1;
 
    for (int i = (int)a.size() - 1; i >= 0; i--) {
        ll x = a[i].first;
        ll cnt = a[i].second;
 
        if (x == 0 || x > cur)
            continue;
 
        ll gap = cur - x;
 
       
        while (gap > 0) {
            if (need > total / 2)
                return false;
 
            need *= 2;
            gap--;
        }
 
        ll used = min(cnt, need);
        unusedNonZero -= used;
 
        ll missing = need - used;
 
        if (missing > total - need)
            return false;
 
        need += missing;
 
        if (need > total)
            return false;
 
        cur = x - 1;
    }
 
   
    while (cur > 0) {
        if (need > total / 2)
            return false;
 
        need *= 2;
        cur--;
    }
 
  
    return need <= zeroCount + unusedNonZero;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    int ballast = 0;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<pair<ll, ll>> a(n);
 
        ll total = 0;
        ll zeroCount = 0;
        ll maxA = 0;
 
        for (int i = 0; i < n; i++) {
            ll x, y;
            cin >> x >> y;
 
            a[i] = {x, y};
 
            total += y;
            maxA = max(maxA, x);
 
            if (x == 0)
                zeroCount = y;
        }
 
        sort(a.begin(), a.end());
 
        ll mexoramax = maxA;
 
       
        ll power = 1;
        int limit = 0;
 
        while (power <= total) {
            if (power > total / 2) {
                limit++;
                break;
            }
            power *= 2;
            limit++;
        }
 
        for (int add = 1; add <= limit; add++) {
            ll target = maxA + add;
 
            if (canCreate(target, a, total, zeroCount)) {
                mexoramax = target;
            } else {
                break;
            }
        }
 
        cout << mexoramax << '
';
    }
 
    return 0;
}