#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n, x;
    cin >> n >> x;
    
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    
    int max_gap = a[0];
    
    
    for (int i = 1; i < n; ++i) {
        max_gap = max(max_gap, a[i] - a[i - 1]);
    }
    
  
    max_gap = max(max_gap, 2 * (x - a[n - 1]));
    
    cout << max_gap << "
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