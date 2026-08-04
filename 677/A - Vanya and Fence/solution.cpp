#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
   int n, h;
   cin>>n>>h;
   int width= 0;
   for(int i =0; i<n; i++){
    int height ;
    cin>>height;
    if(height<=h)
        width++;
    else
        width +=2;
   }
   
   cout<<width;
   return 0;
}