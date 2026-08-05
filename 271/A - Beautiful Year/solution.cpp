#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
int year;
cin>>year;
 
while(true){
year++;
 
int a = year%10;
int b=(year/10)%10;
int c=(year/100)%10;
int d= year/1000;
 
if(a != b && a != c && a !=d && b != c && b != d && c != d){
cout<<year;
break;}}
   return 0;
}