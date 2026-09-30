#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    const int MAX = 1000000;
 
    vector<bool> prime(MAX + 1, true);
    prime[0] = prime[1] = false;
 
    for (int i = 2; i * i <= MAX; i++) {
        if (prime[i]) {
            for (int j = i * i; j <= MAX; j += i) {
                prime[j] = false;
            }
        }
    }
 
    int n;
    cin >> n;
 
    while (n--) {
        long long x;
        cin >> x;
 
        long long r = sqrtl(x);
 
        while ((r + 1) * (r + 1) <= x)
            r++;
 
        while (r * r > x)
            r--;
 
        if (r * r == x && prime[r])
            cout << "YES
";
        else
            cout << "NO
";
    }
 
    return 0;
}