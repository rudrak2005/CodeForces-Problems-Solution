#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n, m;
        cin >> n >> m;
 
        vector<int> exact(m + 1);
 
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            exact[x]++;
        }
 
     
        vector<int> suffix = exact;
 
        for (int x = m - 1; x >= 1; x--) {
            suffix[x] += suffix[x + 1];
        }
 
        int answer = 0;
 
        for (int x = 1; x <= m; x++) {
            int score = suffix[x];
 
           
            if (2 * x <= m) {
                score += exact[2 * x];
            }
 
            answer = max(answer, score);
        }
 
        cout << answer << '
';
    }
 
    return 0;
}