#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
			int n;
			cin>>n;
			int count=0;
			for(int i=0; i<n; i++){
				int p,q;
				cin>>p>>q;
				if(q-p>=2){
					count++;
			}}
			cout<<count;
	 return 0;
}