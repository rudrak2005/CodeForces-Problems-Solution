#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    vector<long long> x(4);
    for (int i = 0; i < 4; i++) {
        cin >> x[i];
    }
 
    
    sort(x.begin(), x.end());
 
    long long total_sum = x[3];
 
    long long a = total_sum - x[2];
    long long b = total_sum - x[1];
    long long c = total_sum - x[0];
 
    cout << a << " " << b << " " << c << "
";
 
    return 0;
}