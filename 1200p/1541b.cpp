#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t; cin >> t;
    while (t-- > 0) {
        int n; cin >> n;
        int ans = 0;
        vector<pair<int, int>> a(n);
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            a[i] = {x, i+1};
        }
        sort(a.begin(), a.end(), [](auto& left, auto& right) {return left.first < right.first;});
        for (int i = 0; i < n; i++) {
            for (int j = i+1; j < n; j++) {
                if (((ll) a[i].first) * ((ll) a[j].first) > (ll) 2*n) break;
                if (((ll) a[i].first) * ((ll) a[j].first) == a[i].second + a[j].second) ans++;
            }
        }
        cout << ans << "\n";
    }
}
