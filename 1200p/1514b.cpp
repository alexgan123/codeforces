#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t; cin >> t;
    while (t-- > 0) {
        int n, k; cin >> n >> k;
        ll ans = 1;
        for (int i = 0; i < k; i++) {
            ans *= n;
            ans %= ((int) 1e9 + 7);
        }
        cout << ans << "\n";
    }
}
