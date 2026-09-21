#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int ballast = 0;
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<long long> b(n);
 
        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            b[i] = x - (i + 1);
        }
 
        sort(b.begin(), b.end());
 
        int answer = 1;
        int current = 1;
 
        for (int i = 1; i < n; i++) {
            if (b[i] == b[i - 1]) {
                continue;
            }
 
            if (b[i] == b[i - 1] + 1) {
                current++;
            } else {
                current = 1;
            }
 
            answer = max(answer, current);
        }
 
        cout << answer << '
';
    }
 
    return 0;
}