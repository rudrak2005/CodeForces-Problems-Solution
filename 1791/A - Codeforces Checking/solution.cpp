#include <iostream>
#include <string>
 
using namespace std;
 
void solve() {
    char c;
    cin >> c;
    
    string target = "codeforces";
    bool found = false;
    
    for (char t : target) {
        if (c == t) {
            found = true;
            break;
        }
    }
    
    if (found) {
        cout << "YES
";
    } else {
        cout << "NO
";
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}