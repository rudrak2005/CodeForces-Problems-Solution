#include <bits/stdc++.h>
using namespace std;
 
int solvePoliceCase(int events) {
    int availablePolice = 0;
    int unansweredCrimes = 0;
 
    while (events--) {
        int currentEvent;
        cin >> currentEvent;
 
        if (currentEvent == -1) {
            if (availablePolice == 0)
                unansweredCrimes++;
            else
                availablePolice--;
        } else {
            availablePolice += currentEvent;
        }
    }
 
    return unansweredCrimes;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
 
    cout << solvePoliceCase(n) << "
";
 
    return 0;
}