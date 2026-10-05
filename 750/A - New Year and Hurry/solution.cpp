#include <iostream>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n, k;
    cin >> n >> k;
 
    int remaining_time = 240 - k;
    int problems_solved = 0;
    int time_spent = 0;
 
    for (int i = 1; i <= n; ++i) {
        time_spent += 5 * i;
        if (time_spent <= remaining_time) {
            problems_solved++;
        } else {
            break;
        }
    }
 
    cout << problems_solved << "
";
 
    return 0;
}