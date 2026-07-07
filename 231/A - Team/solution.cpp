#include<iostream>
 
using namespace std;
int main(){
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
 
        int n;
        cin>>n;
 
        int answer=0;
        for(int i=0;i<n;i++){
            int petya, vasys, tonya;
            cin>>petya>>vasys>>tonya;
            if(petya+vasys+tonya>=2){
                answer++;
            }
 
 
        }
        cout<<answer<<"
";
   
   return 0;
}