#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t; cin >> t;
    while (t-- > 0) {
        ll n, h;
        cin >> n >> h;
        vector<ll> a;
        ll pre = 0;
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            if (pre != 0) a.push_back(x - pre);
            pre = x;
        }
        a.push_back(1e18);
        sort(a.begin(), a.end());
        ll cur = 0, total = 0, ans = 0, i = 0;
        while (total < h) {
            if (total + ((n-i) * (a[i]-cur)) <= h) {
                total += ((n-i) * (a[i]-cur));
                ans += (a[i]-cur);
                cur = a[i];
                i++;
            }
            else {
                ans += ceil(((double) (h-total)) / ((double) (n-i)));
                break;
            }
        }
        cout << ans << "\n";
    }
}
