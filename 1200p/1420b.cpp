#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t; cin >> t;
    while (t-- > 0) {
        int n; cin >> n;
        ll ans = 0;
        vector<int> a(n);
        vector<int> pos(n);
        vector<int> f(31);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            for (int j = 0; j <= 30; j++) {
                if ((1 << j) & a[i]) pos[i] = j;
            }
            f[pos[i]]++;
        }
        for (int i : f) ans += (((ll) i) * ((ll) i - 1)) / 2;
        cout << ans << "\n";
    }
}
