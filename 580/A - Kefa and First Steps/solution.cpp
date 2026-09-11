#include <bits/stdc++.h>
 
using namespace std;
 
	
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
	int n;
 
	cin>>n;
	
	vector<int> a(n);
	for(int i =0; i<n; i++){
		cin>>a[i];
	}
	int current = 1;
	int answer = 1;
	
	for(int i =1; i<n; i++){
		if(a[i] >=  a[i-1]){
			current++;
		}
		else{
			current =1;
		}
		answer = max(answer, current);
	}
	cout<<answer<<'
';
		
	 return 0;
}