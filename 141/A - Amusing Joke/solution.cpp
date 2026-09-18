#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
string first, second, pile;
 
cin>>first>>second>>pile;
if(first.size() + second.size() != pile.size()){
    cout<<"NO
";
    return 0;
 
}
 
int freq[26]= {};
for(char ch : first)
    freq[ch - 'A']++;
 
for(char ch : second)
    freq[ch-'A']++;
 
for(char ch : pile)
    freq[ch - 'A']--;
 
for(int i=0; i<26; i++){
    if(freq[i] != 0){
        cout<<"NO
";
        return 0 ;
    }
}
 
 
cout<<"YES
";
  
 
    return 0;
}