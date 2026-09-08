#include <bits/stdc++.h>
 
using namespace std;
 
	
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
	int n;
	cin>>n;
	map<string, int> mp;
	while(n--){
		string name;
		cin>>name;
		
		if(mp[name] ==0){
			cout<<"OK
";
			mp[name] = 1;
		}
		else{
			cout<<name<<mp[name]<<"
";
			mp[name]++;
		}
	}
	return 0;
		
	 return 0;
}