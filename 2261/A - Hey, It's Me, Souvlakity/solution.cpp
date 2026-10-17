#include <bits/stdc++.h>
using namespace std;
 
int getScore(const string& s) {
    int ones = count(s.begin(), s.end(), '1');
 
    if (ones <= 1) return 0;
    if (ones == 2) return 1;
 
    return (int)s.rfind('1') - (int)s.find('1');
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        cout << getScore(s) << '
';
    }
}