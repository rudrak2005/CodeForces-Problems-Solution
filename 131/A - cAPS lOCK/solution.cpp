#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    string s;
    cin >> s;
 
    int upper = 0;
 
    for (char ch : s) {
        if (isupper(ch))
            upper++;
    }
 
    bool change = false;
 
    if (upper == (int)s.size()) {
        change = true;
    }
    else if (islower(s[0]) && upper == (int)s.size() - 1) {
        change = true;
    }
 
    if (change) {
        for (char &ch : s) {
            if (islower(ch))
                ch = toupper(ch);
            else
                ch = tolower(ch);
        }
    }
 
    cout << s << '
';
 
    return 0;
}