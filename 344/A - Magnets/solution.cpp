#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
		int n; 
		cin>>n;
		string previous;
		cin>>previous;
		
		int groups=1;
		for(int i=1; i<n; i++){
			string current;
			cin>>current;
			if(current != previous){
				groups++;
			}
			previous = current;
		}
		cout<<groups;
		
		
	 return 0;
}