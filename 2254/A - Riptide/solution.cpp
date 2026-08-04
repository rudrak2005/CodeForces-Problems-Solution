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
    int a, b, c;
    cin>>a>>b>>c;
    int arr[3]={a,b,c};
    sort(arr,arr +3);
    int ans =min(arr[1]-arr[0],arr[2]-arr[1]);
    cout<<ans<<'
';
    
}
   return 0;
}