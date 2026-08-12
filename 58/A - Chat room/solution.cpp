#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
			string s;
			cin>>s;
			string target ="hello";
			int j=0;
			
		for(char ch : s){
			if(j<5 && ch == target[j]){
			j++;}
		}
		if(j==5)
			cout<<"YES";
		else{
		cout<<"NO";}
		
	 return 0;
}