#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;
 
        long long d = a - b;
 
        cout << max(llabs(d), llabs(d + c)) << '
';
    }
 
    return 0;
}