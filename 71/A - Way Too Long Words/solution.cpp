#include<iostream>
#include <string>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int n;
   cin >> n;
 
   while(n--){
    string word;
    cin>>word;
 
    if(word.length() > 10){
        cout<<word[0]<<word.length()-2<<word.back()<<endl;
    }
else{cout<<word<<'
';}
}
   
   return 0;
}