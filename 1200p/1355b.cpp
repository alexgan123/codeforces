#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t; cin >> t;
    while (t-- > 0) {
        int n; cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end());
        int ans = -1;
        int m = 0;
        int mx = 0;
        for (int x : a) {
            if (m >= mx) {
                mx = x;
                m = 1;
                ans++;
            }
            else {
                m++;
                mx = max(mx, x);
            }
        }
        if (m >= mx) ans++;
        cout << ans << "\n";
    }
}
