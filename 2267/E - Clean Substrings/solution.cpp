#include <bits/stdc++.h>
using namespace std;
 
struct SegmentTree {
    struct Node {
        int zero = 0;
        int one = 0;
        bool lazy = false;
    };
 
    vector<Node> tree;
 
    SegmentTree(int n) {
        tree.resize(4 * n + 5);
    }
 
    void build(int node, int l, int r, const vector<int>& pref) {
        if (l == r) {
            if (pref[l] == 0)
                tree[node].zero = 1;
            else
                tree[node].one = 1;
            return;
        }
 
        int mid = (l + r) / 2;
 
        build(node * 2, l, mid, pref);
        build(node * 2 + 1, mid + 1, r, pref);
 
        pull(node);
    }
 
    void pull(int node) {
        tree[node].zero = tree[node * 2].zero + tree[node * 2 + 1].zero;
        tree[node].one = tree[node * 2].one + tree[node * 2 + 1].one;
    }
 
    void apply(int node) {
        swap(tree[node].zero, tree[node].one);
        tree[node].lazy ^= 1;
    }
 
    void push(int node) {
        if (!tree[node].lazy)
            return;
 
        apply(node * 2);
        apply(node * 2 + 1);
 
        tree[node].lazy = false;
    }
 
    void flip(int node, int l, int r, int ql, int qr) {
        if (ql <= l && r <= qr) {
            apply(node);
            return;
        }
 
        push(node);
 
        int mid = (l + r) / 2;
 
        if (ql <= mid)
            flip(node * 2, l, mid, ql, qr);
 
        if (qr > mid)
            flip(node * 2 + 1, mid + 1, r, ql, qr);
 
        pull(node);
    }
 
    void flip(int l, int r, int n) {
        if (l > r)
            return;
 
        flip(1, 0, n, l, r);
    }
 
    int zeros() const {
        return tree[1].zero;
    }
 
    int ones() const {
        return tree[1].one;
    }
};
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int T;
    cin >> T;
 
    while (T--) {
        int n, q;
        cin >> n >> q;
 
        string s;
        cin >> s;
 
        int m = n - 1;
 
        vector<int> diff(m + 1, 0);
 
        for (int i = 1; i <= m; ++i) {
            diff[i] = (s[i - 1] != s[i]);
        }
 
        vector<int> pref(m + 1, 0);
 
        for (int i = 1; i <= m; ++i) {
            pref[i] = pref[i - 1] ^ diff[i];
        }
 
        long long weightedTransitions = 0;
 
        for (int i = 1; i <= m; ++i) {
            if (diff[i]) {
                weightedTransitions += 1LL * i * (m - i + 1);
            }
        }
 
        SegmentTree seg(m + 1);
        seg.build(1, 0, m, pref);
 
        auto getPower = [&]() -> long long {
            long long zero = seg.zeros();
            long long one = seg.ones();
 
            return (weightedTransitions + zero * one) / 2;
        };
 
        cout << getPower();
 
        while (q--) {
            int pos;
            cin >> pos;
 
            --pos;
 
            s[pos] = (s[pos] == '0' ? '1' : '0');
 
            if (pos - 1 >= 0) {
                int k = pos;
 
                if (k >= 1 && k <= m) {
                    if (diff[k]) {
                        weightedTransitions -= 1LL * k * (m - k + 1);
                    } else {
                        weightedTransitions += 1LL * k * (m - k + 1);
                    }
 
                    diff[k] ^= 1;
 
                    seg.flip(k, m, m);
                }
            }
 
          
            if (pos + 1 < n) {
                int k = pos + 1;
 
                if (k >= 1 && k <= m) {
                    if (diff[k]) {
                        weightedTransitions -= 1LL * k * (m - k + 1);
                    } else {
                        weightedTransitions += 1LL * k * (m - k + 1);
                    }
 
                    diff[k] ^= 1;
 
                    seg.flip(k, m, m);
                }
            }
 
            cout << ' ' << getPower();
        }
 
        cout << '
';
    }
 
    return 0;
}