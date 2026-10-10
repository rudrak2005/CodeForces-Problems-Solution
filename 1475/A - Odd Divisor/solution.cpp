#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
 
    while(t--){
        long long n;
        cin>> n;
 
        while(n%2==0){
            n /= 2;
 
        }
        if(n>1){
            cout<<"YES
";
        }
        else{cout<<"NO
";}
    }
 
    return 0;
}