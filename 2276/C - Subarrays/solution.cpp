#include <iostream>
#include <vector>
#include <map>
 
using namespace std;
 
void solve() {
    int n;
    long long k;
    cin >> n >> k;
    
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    vector<long long> pref(n + 1, 0);
    for (int i = 0; i < n; i++) {
        pref[i + 1] = pref[i] + a[i];
    }
    
    long long ans = 0;
    map<long long, int> freq;
    
    for (int j = 0; j <= n; j++) {
      
        int add_idx = j - k - 1;
        if (add_idx >= 0) {
            long long rem_old = pref[add_idx] % k;
            if (rem_old < 0) rem_old += k;
            freq[rem_old]++;
        }
        
        long long rem_curr = pref[j] % k;
        if (rem_curr < 0) rem_curr += k;
        
        if (freq.count(rem_curr)) {
            ans += freq[rem_curr];
        }
    }
    
    cout << ans << "
";
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