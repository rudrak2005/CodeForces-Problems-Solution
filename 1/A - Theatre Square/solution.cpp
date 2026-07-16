// #include <bits/stdc++.h>
#include<iostream>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
        long long n,m,a;
        cin>>n>>m>>a;
        long long row=(n+a-1)/a;
        long long col=(m+a-1)/a;
        cout<<row*col;
    return 0;
}