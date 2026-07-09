#include <iostream>
#include <string>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
 
    int x = 0;
 
    for (int i = 0; i < n; i++) {
        string statement;
        cin >> statement;
 
        if (statement[1] == '+') {
            x++;
        } else {
            x--;
        }
    }
 
    cout << x << '
';
 
    return 0;
}