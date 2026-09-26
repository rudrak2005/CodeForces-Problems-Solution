#include <bits/stdc++.h>
using namespace std;
 
int nextValue(int x) {
    int sum = 0;
 
    while (x > 0) {
        int digit = x % 10;
        sum += digit * digit;
        x /= 10;
    }
 
    return sum;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        unordered_map<int, long long> freq;
 
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
 
            for (int step = 0; step < 1000; step++) {
                x = nextValue(x);
            }
 
            freq[x]++;
        }
 
        long long answer = 0;
 
        for (auto &[value, count] : freq) {
            answer += count * (count - 1) / 2;
        }
 
        cout << answer << '
';
    }
 
    return 0;
}