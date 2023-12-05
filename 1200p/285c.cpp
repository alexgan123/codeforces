#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n; cin >> n;
    ll ans = 0;
    vector<bool> flag(n+1);
    vector<int> a;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        if (x >= 1 && x <= n && !flag[x]) flag[x] = true;
        else a.push_back(x);
    }
    sort(a.begin(), a.end());
    int j = 0;
    for (int i = 1; i <= n; i++) {
        if (!flag[i]) {
            ans += abs(((ll) i) - ((ll) a[j]));
            j++;
        }
    }
    cout << ans << "\n";
}
