#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int bit = 0; bit < pow(2, n); bit++) {
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (bit & (1 << i)) ans += a[i];
            else ans -= a[i];
        }
        ans %= 360;
        if (ans == 0) {
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
}
