#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int T;
    cin >> T;
 
    while (T--) {
        int n, q;
        cin >> n >> q;
 
        vector<int> a(n);
 
        for (int &x : a) {
            cin >> x;
        }
 
        vector<long long> value;
 
        value.push_back(
            (long long)*max_element(a.begin(), a.end()) -
            *min_element(a.begin(), a.end())
        );
 
        for (int step = 1; step <= 60; ++step) {
            vector<int> nxt;
            nxt.reserve(n * (n - 1) / 2);
 
            for (int i = 0; i < n; ++i) {
                for (int j = i + 1; j < n; ++j) {
                    nxt.push_back(a[i] ^ a[j]);
                }
            }
 
            nth_element(nxt.begin(), nxt.begin() + n, nxt.end());
            nxt.resize(n);
 
            int mn = *min_element(nxt.begin(), nxt.end());
            int mx = *max_element(nxt.begin(), nxt.end());
 
            value.push_back((long long)mx - mn);
 
            a.swap(nxt);
 
            if (mx == 0) {
                break;
            }
        }
 
        while (q--) {
            int x;
            cin >> x;
 
            if (x < (int)value.size()) {
                cout << value[x] << ' ';
            } else {
                cout << 0 << ' ';
            }
        }
 
        cout << '
';
    }
 
    return 0;
}