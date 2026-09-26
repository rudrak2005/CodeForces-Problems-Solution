#include <bits/stdc++.h>
using namespace std;
 
class Fenwick {
    int n;
    vector<int> bit;
 
public:
    Fenwick(int n) : n(n), bit(n + 1, 0) {}
 
    void add(int idx, int val) {
        for (; idx <= n; idx += idx & -idx)
            bit[idx] += val;
    }
 
    int kth(int k) const {
        int idx = 0;
        int step = 1;
 
        while ((step << 1) <= n)
            step <<= 1;
 
        for (; step > 0; step >>= 1) {
            int nxt = idx + step;
 
            if (nxt <= n && bit[nxt] < k) {
                idx = nxt;
                k -= bit[nxt];
            }
        }
 
        return idx + 1;
    }
};
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n, k;
        cin >> n >> k;
 
        vector<long long> a(n + 1);
 
        for (int i = 1; i <= n; ++i)
            cin >> a[i];
 
        Fenwick fw(n);
 
        for (int i = 1; i <= n; ++i)
            fw.add(i, 1);
 
        long long score = 0;
        int m = n;
 
        while (m >= k) {
            int leftPos = fw.kth(k);
            int rightPos = fw.kth(m - k + 1);
 
            int removePos;
 
            if (a[leftPos] >= a[rightPos])
                removePos = leftPos;
            else
                removePos = rightPos;
 
            score += a[removePos];
            fw.add(removePos, -1);
            --m;
        }
 
        cout << score << '
';
    }
 
    return 0;
}