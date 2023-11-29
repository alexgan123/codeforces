#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll mindigit(ll x) {
    string sx = to_string(x);
    ll ans = 9;
    for (char c : sx) ans = min(ans, (ll) (c - '0'));
    return ans;
}

ll maxdigit(ll x) {
    string sx = to_string(x);
    ll ans = 0;
    for (char c : sx) ans = max(ans, (ll) (c - '0'));
    return ans;
}

int main() {
    int t; cin >> t;
    while (t-- > 0) {
        ll a1, k; cin >> a1 >> k;
        for (ll i = 2; i <= k; i++) {
            if (mindigit(a1) != 0 && maxdigit(a1) != 0) a1 += mindigit(a1) * maxdigit(a1);
            else break;
        }
        cout << a1 << "\n";
    }
}
