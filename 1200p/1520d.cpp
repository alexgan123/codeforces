#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t; cin >> t;
    for (int q = 0; q < t; q++) {
        int n; cin >> n;
        ll ans = 0;
        vector<int> f((2*n) + 1);
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            x -= i;
            f[x + n]++;
        }
        for (ll y : f) {
            ans += (y * (y - 1)) / 2;
        }
        cout << ans << "\n";
    }
}