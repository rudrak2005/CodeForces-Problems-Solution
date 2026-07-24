#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    cin >> s;
    string ans;
    
   
    for (char c : s) { 
        c = tolower(c);
        if (c == 'a' || c == 'o' || c == 'y' || c == 'e' || c == 'u' || c == 'i') {
            continue;
        }
        ans += '.';
        ans += c;
    }
    
    cout << ans;
    return 0;
}