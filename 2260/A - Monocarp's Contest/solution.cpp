#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> a(n);
 
        for (int &x : a) {
            cin >> x;
        }
 
      
        int middleEasy = 0;
 
        for (int i = 1; i < n - 1; i++) {
            if (a[i] == 0) {
                middleEasy++;
            }
        }
 
    
        if (a[0] == 0 && a[n - 1] == 0) {
            cout << 0 << '
';
        }
    
        else if (a[0] == 1 && a[n - 1] == 1) {
            if (middleEasy >= 2)
                cout << 2 << '
';
            else
                cout << -1 << '
';
        }
       
        else {
            if (middleEasy >= 1)
                cout << 1 << '
';
            else
                cout << -1 << '
';
        }
    }
 
    return 0;
}
 
 
 
 