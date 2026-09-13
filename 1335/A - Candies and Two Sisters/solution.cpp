#include <bits/stdc++.h>
 
using namespace std;
 
	
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin>>t;
while(t--){
	long long n;
	cin>> n;
	
	if(n % 2 ==1){
		cout<<n/2<<'
';
	}
	else{
		cout<<n/2-1<<'
';
	}
}
 
 
return 0;
 
}
		