#include <iostream>
#include <vector>
 
using namespace std;
 
bool is_lucky(int x) {
    while (x > 0) {
        int digit = x % 10;
        if (digit != 4 && digit != 7) {
            return false;
        }
        x /= 10;
    }
    return true;
}
 
int main() {
    int n;
    if (!(cin >> n)) return 0;
 
  
    vector<int> lucky_numbers = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
 
    for (int lucky : lucky_numbers) {
        if (n % lucky == 0) {
            cout << "YES" << endl;
            return 0;
        }
    }
 
    cout << "NO" << endl;
    return 0;
}