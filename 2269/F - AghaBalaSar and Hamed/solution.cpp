#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int T;
    cin >> T;
 
    while (T--) {
        int n;
        cin >> n;
 
        vector<int> p(n);
        for (int &x : p)
            cin >> x;
 
       
        vector<int> nxt(n, -1);
        vector<int> st;
        st.reserve(n);
 
        
        vector<int> need(n, n);
 
        for (int i = 0; i < n; ++i) {
            while (!st.empty() && p[st.back()] < p[i]) {
                int u = st.back();
                st.pop_back();
 
                nxt[u] = i;
                need[i] = min(need[i], u);
            }
 
            st.push_back(i);
        }
 
        vector<int> far(n, -1);
        int best = -1;
 
        for (int i = 0; i < n; ++i) {
            if (nxt[i] != -1)
                best = max(best, nxt[i]);
 
            far[i] = best;
        }
 
      
        for (int j = 0; j < n; ++j)
            need[j] = min(need[j], j + 1);
 
 
        for (int i = 0; i < n; ++i)
            p[i] = max(i - 1, nxt[i]);
 
        vector<int> root(n);
 
        for (int i = n - 1; i >= 0; --i) {
            if (far[i] > i)
                root[i] = root[far[i]];
            else
                root[i] = i;
        }
 
      
        vector<int> subCnt(n, 0);
 
        for (int i = 0; i < n; ++i) {
            if (p[i] >= 0)
                ++subCnt[p[i]];
        }
 
   
        for (int i = 0; i < n; ++i) {
            if (far[i] > i)
                subCnt[far[i]] += subCnt[i];
        }
 
      
        vector<int> pref(n + 1, 0);
 
        for (int x : need)
            ++pref[x];
 
        for (int i = 1; i <= n; ++i)
            pref[i] += pref[i - 1];
 
       
        long long stepSum = 0;
 
        for (int v = 0; v < n; ++v) {
            int r = root[v];
 
            long long targetCnt = 0;
 
            if (v < r)
                targetCnt = pref[r] - pref[v];
 
            stepSum += 1LL * subCnt[v] * targetCnt;
 
          
            if (v + 1 < n &&
                p[v + 1] == v &&
                need[v] == v + 1 &&
                root[v] > v) {
                --stepSum;
            }
        }
 
       
        long long reachable = 0;
 
        int L = 0;
 
   
        for (int r = 0; r < n; ++r) {
            if (root[r] != r)
                continue;
 
            long long goodTargets = 0;
 
            for (int i = r; i >= L; --i) {
              
                if (i + 1 <= r && need[i + 1] <= r)
                    ++goodTargets;
 
               
                if (p[i] >= 0 && root[p[i]] == r)
                    reachable += goodTargets;
            }
 
            L = r + 1;
        }
 
      
        long long base = 1LL * n * (n - 1) / 2;
 
      
        long long direct = 0;
 
        for (int i = 0; i < n; ++i)
            if (nxt[i] != -1)
                ++direct;
 
       
        long long answer =
            base + 2LL * reachable - direct + stepSum;
 
        cout << answer << '
';
    }
 
    return 0;
}