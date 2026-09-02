#include <bits/stdc++.h>
 
using namespace std;
 
	
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
	int n;
	cin>> n;
	int notes[] = { 100, 20, 10, 5, 1};
	int answer = 0;
	for(int note : notes){
		answer += n/ note;
		n %= note;
	}
	cout<<answer<<'
';
	
		
	 return 0;
}