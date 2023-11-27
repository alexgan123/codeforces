#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int X, Y, Z;
int main() {
    int n; cin >> n;
    for (int i = 0, x, y, z; i < n; i++) {
        cin >> x >> y >> z;
        X += x; Y += y; Z += z;
    } 
    cout << ((X == 0 && Y == 0 && Z == 0) ? "YES\n" : "NO\n");
}
