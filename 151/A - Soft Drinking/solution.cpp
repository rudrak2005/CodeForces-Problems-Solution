#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
long long n, k, l, c, d, p, nl, np;
 
cin>>n>>k>>l>>c>>d>>p>>nl>>np;
 
long long drink = (k*l)/(n*nl);
long long lime = (c*d)/n;
long long salt = p/(n*np);
 
cout<<min({drink, lime, salt})<<'
';
 
    return 0;
}