#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main() {
  
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int a, b;
    cin >> a >> b;
 
    int different_days = min(a, b);
    int same_days = (max(a, b) - min(a, b)) / 2;
 
    cout << different_days << " " << same_days << "
";
 
    return 0;
}