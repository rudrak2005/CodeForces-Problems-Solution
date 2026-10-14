#include <bits/stdc++.h>
using namespace std;
 
long long solve(long long a, long long b) {
    if (a <= b) return -1;
    return a >= 2 * b ? b : a - b;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        cout << solve(a, b) << '
';
    }
}