#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n, x;
        cin >> n >> x;
 
        vector<int> a(n);
 
        for (int &v : a) {
            cin >> v;
        }
 
        vector<int> primes;
 
        for (int p = 2; 1LL * p * p <= x; ++p) {
            if (x % p == 0) {
                primes.push_back(p);
 
                while (x % p == 0) {
                    x /= p;
                }
            }
        }
 
        if (x > 1) {
            primes.push_back(x);
        }
 
        long long answer = 0;
 
        for (int p : primes) {
            long long current = 0;
 
            for (int v : a) {
                if (v % p == 0) {
                    current += v;
                }
            }
 
            answer = max(answer, current);
        }
 
        cout << answer << '
';
    }
 
    return 0;
}