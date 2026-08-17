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
			int n,m;
			cin>>n>>m;
			
			vector<bool> available(26, false);
			
			for(int i=0; i<n; i++)
			{string word;
		cin>>word;
			available[word[0]-'a']=true;}
			vector<string> abbreviations(m);
			for(string &s : abbreviations)
			{
				cin>>s;
			}
			vector<bool> created(m, false);
			int done = 0;
			while(done<m){
				bool progress=false;
				
				for(int i =0; i<m; i++){
					if(created[i])
						continue;
					bool canCreate=true;
					for(char c:abbreviations[i]){
						if(!available[c-'A']){
							canCreate= false;
					break;}}
					if(canCreate){created[i]=true;
					done++;
					
				available[abbreviations[i][0]-'A']=true;
					progress=true;
				}}
				if(!progress)
					break;
			}
			cout<<(done==m ? "YES" : "NO")<<'
';
		}
		
	 return 0;
}