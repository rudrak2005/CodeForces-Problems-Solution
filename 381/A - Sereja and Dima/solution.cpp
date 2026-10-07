#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    if (!(cin >> n)) return 0;
 
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    int left = 0;
    int right = n - 1;
    long long sereja = 0;
    long long dima = 0;
    bool turn = true; 
 
    while (left <= right) {
        int value;
        
     
        if (a[left] >= a[right]) {
            value = a[left];
            left++;
        } else {
            value = a[right];
            right--;
        }
 
       
        if (turn) {
            sereja += value;
        } else {
            dima += value;
        }
 
        turn = !turn; 
    }
 
    cout << sereja << ' ' << dima << '
';
 
    return 0;
}