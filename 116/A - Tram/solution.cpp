#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
		int n;
cin>>n;
	int current =0;
	int maximum =0;
	for(int i=0; i<n; i++){
		int a,b;
		cin>>a>>b;
 
	current=current-a+b;
maximum =max(maximum, current);
}
cout<<maximum;
   return 0;
}