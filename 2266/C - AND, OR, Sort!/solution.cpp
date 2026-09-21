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
 
        string s;
        cin >> s;
 
        if (s[0] == '1') {
            int zeros = 0;
 
            for (char ch : s) {
                if (ch == '0')
                    zeros++;
            }
 
            cout << zeros << '
';
            continue;
        }
 
        int suffixZeros = 0;
 
        for (char ch : s) {
            if (ch == '0')
                suffixZeros++;
        }
 
        int prefixOnes = 0;
        int answer = suffixZeros;
 
        for (char ch : s) {
            if (ch == '0') {
                suffixZeros--;
            } else {
                prefixOnes++;
            }
 
            answer = min(answer, prefixOnes + suffixZeros);
        }
 
        cout << answer << '
';
    }
 
    return 0;
}