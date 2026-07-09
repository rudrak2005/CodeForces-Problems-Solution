#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n, k ;
    cin >> n>>k;
    vector<int> scores(n);
    for(int i=0; i<n; i++){
        cin >> scores[i];
    }
    int cutoff = scores[k-1];
    int answer =0;
    for(int score : scores){
        if(score >= cutoff && score > 0){
            answer++;
        }
    }
    cout << answer << "
";
 
 
    return 0;
}