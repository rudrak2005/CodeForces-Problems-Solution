 
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
        string s;
        cin>>s;
        int count = 0;
        for(char c : s){
            if(c=='4' || c == '7'){
                count++;
            }
        }
        if(count ==4 || count == 7){
            cout<<"YES
";
        }
        else{
            cout<<"NO
";
        }
 
 
    return 0;
}