#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
		
		long long n;
		cin>>n;
		if(n%2==0)
			cout<<n/2;
		else  
			cout<< -(n+1)/2;
		
	 return 0;
}