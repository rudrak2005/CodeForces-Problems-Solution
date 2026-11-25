#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int n;
 
bool can_make(int k) {
    int rem = n;
    for (int i = k; i >= 1; --i) {
        int take = min(k / i, rem / i);
        rem -= take * i;
    }
    return rem == 0;
}
 
void solve() {
    cin >> n;
    int low = 1, high = n, ans = n;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (can_make(mid)) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
 
    cout << ans << "
";
 
    vector<int> cnt(ans + 1, 0);
    int rem = n;
    for (int i = ans; i >= 1; --i) {
        cnt[i] = min(ans / i, rem / i);
        rem -= cnt[i] * i;
    }
 
    int val = 1;
    bool first = true;
    for (int i = 1; i <= ans; ++i) {
        for (int j = 0; j < cnt[i]; ++j) {
            for (int r = 0; r < i; ++r) {
                if (!first) cout << " ";
                cout << val;
                first = false;
            }
            ++val;
        }
    }
    cout << "
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