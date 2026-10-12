#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int k, r;
    cin >> k >> r;
 
    for (int x = 1; x <= 10; x++) {
        int amount = k * x;
        if (amount % 10 == 0 || amount % 10 == r) {
            cout << x << '
';
            break;
        }
    }
 
    return 0;
}