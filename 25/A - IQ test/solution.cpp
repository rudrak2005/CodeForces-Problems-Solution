#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
 
    vector<int> a(n);
    int evenCount = 0, oddCount = 0;
 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }
 
    bool findEven = (evenCount == 1);
 
    for (int i = 0; i < n; i++) {
        bool isEven = (a[i] % 2 == 0);
 
        if (isEven == findEven) {
            cout << i + 1 << "
";
            break;
        }
    }
 
    return 0;
}