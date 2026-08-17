#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
	
	int t;
	cin>>t;
	while(t--){
		int n, m;
		cin>>n>>m;
		long long  a1, b1; 
		cin>> a1;
		
		for(int i=1; i<n; i++){
			long long x;
		cin>>x;}
		cin>>b1;
		for(int i=1; i<m; i++){
			long long x;
			cin>>x;
		}
		long long turnsA = a1+n-1;
		long long turnsB = b1+m-1;
		
		
		if(turnsA >=turnsB){
			cout<<1<<'
';
		}
		else{
			cout<<2<<'
';
		}
	}
		
		
	 return 0;
}