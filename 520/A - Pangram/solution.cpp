#include <bits/stdc++.h>
#include <string>
#include <cctype>
using namespace std;
 
	
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
	int n;
	cin>>n;
	string s;
	cin>>s;
	bool present[26] = {};
	for(char c : s)
	{
		c = tolower(c);
		present[c-'a'] = true;
	}
	for(int i =0; i<26; i++)
	{
if(!present[i]){
cout<<"NO
";
return 0;	
	}}
	cout<<"YES
";
		
	 return 0;
}