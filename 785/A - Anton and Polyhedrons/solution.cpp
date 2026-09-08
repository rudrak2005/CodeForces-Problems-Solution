#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    cin >> n;
 
    int total = 0;
    string s;
 
    while (n--) {
        cin >> s;
 
        if (s == "Tetrahedron")
            total += 4;
        else if (s == "Cube")
            total += 6;
        else if (s == "Octahedron")
            total += 8;
        else if (s == "Dodecahedron")
            total += 12;
        else if (s == "Icosahedron")
            total += 20;
    }
 
    cout << total << endl;
    return 0;
}