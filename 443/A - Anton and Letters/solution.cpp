#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    getline(cin, s);          
 
    bool seen[26] = {false};  
 
    for (char c : s) {
        if (c >= 'a' && c <= 'z') {
            seen[c - 'a'] = true;
        }
    }
 
    int ans = 0;
    for (int i = 0; i < 26; i++) {
        if (seen[i]) ans++;
    }
 
    cout << ans << endl;
    return 0;
}