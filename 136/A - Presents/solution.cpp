#include <bits/stdc++.h>
 
using namespace std;
 
	
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
	int n;
	cin >> n;
	vector<int> ans(n+1);
	
	
	for(int i=1; i<=n; i++){
		int x;
		cin>>x;
	ans[x]=i;}
	for(int i=1; i<=n; i++){
		cout<<ans[i]<<" ";
	}
	
		
		
	 return 0;
}