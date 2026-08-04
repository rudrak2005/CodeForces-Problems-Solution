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
    int n;
    string s;
    cin>>n>>s;
    int groups=1;
    for(int i=0; i<n-1; ++i){
        if(s[i] != s[i+1])  groups++;
    }
    bool can_reduce_2 =false;
    bool can_reduce_1 = false;
    for(int i=1 ; i<n-1; ++i){
        if(s[i-1] != s[i] && s[i] != s[i+1]){
            if(s[i-1]==s[i+1]){
                can_reduce_2=true;
                break;
            }
            else{
                can_reduce_1 =true;
            }
        }
    }
    if(can_reduce_2){
        cout<<groups-2<<'
';
 
    }
    else if(can_reduce_1){
        cout<<groups-1<<'
';
    }
    else{
        cout<<groups<<'
';
    }
}
   return 0;
}