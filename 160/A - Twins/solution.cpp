#include <bits/stdc++.h>
 
using namespace std;
 
	
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
	int n;
	cin>>n;
	vector<int> coins(n);
	int total =0;
	for(int i=0; i<n; i++){
		cin>> coins[i];
		total += coins[i];
	}
	sort(coins.begin(), coins.end(), greater<int>());
	int mysum= 0, count=0;
	
	for(int coin : coins){
		mysum +=  coin;
		count++;
		if(mysum>total-mysum){
			cout<<count;
			break;
		}
	}
		
		
	 return 0;
}