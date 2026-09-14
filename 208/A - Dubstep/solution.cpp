#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    string s;
    cin >> s;
 
    string temp;
 
    for (int i = 0; i < (int)s.size();) {
        if (i + 2 < (int)s.size() &&
            s[i] == 'W' &&
            s[i + 1] == 'U' &&
            s[i + 2] == 'B') {
            temp += ' ';
            i += 3;
        } else {
            temp += s[i];
            i++;
        }
    }
 
    stringstream ss(temp);
    string word;
    bool first = true;
 
    while (ss >> word) {
        if (!first) cout << " ";
        cout << word;
        first = false;
    }
 
    cout << "
";
    return 0;
}