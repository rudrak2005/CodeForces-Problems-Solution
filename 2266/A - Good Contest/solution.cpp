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
 
        int a, b, c;
        cin >> a >> b >> c;
 
        int strong = min({a, b, c});
        int weak = n - strong;
 
        cout << weak << '
';
    }
 
    return 0;
}