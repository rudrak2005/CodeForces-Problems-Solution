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
 
        long long big = 1LL << (n - k + 1);
        long long answer = big + 2LL * (k - 1);
 
        cout << answer << '
';
    }
 
    return 0;
}