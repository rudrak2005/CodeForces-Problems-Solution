#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
		int n;
		cin>>n;
		
		vector<int> home(n), away(n);
		
		for(int i =0; i<n; i++){
			cin>>home[i]>>away[i];
		}
		
		int ans=0;
		
		for(int i =0; i<n; i++){
			for(int j =0; j<n; j++){
				if(i != j && home[i] == away[j]){
					ans++;
				}
			}
		}
		cout<<ans<<'
';
    return 0;
}