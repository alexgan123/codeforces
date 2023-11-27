#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll t, n, curmax, ans;
bool pos;
int main() {
    cin >> t;
    for (int z = 0; z < t; z++) {
        cin >> n; curmax = 0; ans = 0;
        for (int i = 1; i <= n; i++) {
            ll a; cin >> a;
            if (i == 1) {
                pos = (a > 0);
                curmax = a;
            }
            else {
                if (pos) {
                    if (a > 0) curmax = max(curmax, a);
                    else {
                        pos = !pos;
                        ans += curmax;
                        curmax = a;
                    }
                }
                else {
                    if (a < 0) curmax = max(curmax, a);
                    else {
                        pos = !pos;
                        ans += curmax;
                        curmax = a;
                    }
                }
            }
        }
        ans += curmax;
        cout << ans << "\n";
    }
}
