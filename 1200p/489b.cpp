#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, m, ans;
int main() {
    cin >> n; vector<int> a(n); for (int i = 0; i < n; i++) cin >> a[i];
    cin >> m; vector<int> b(m); for (int i = 0; i < m; i++) cin >> b[i];
    sort(begin(a), end(a));
    sort(begin(b), end(b));
    for (int i = 0; i < n; i++) {
        if (b.empty()) break;
        for (int j = a[i]-1; j <= a[i]+1; j++) {
            auto it = lower_bound(b.begin(), b.end(), j); 
            if (it == b.end()) continue;
            if (*it != j) continue;
            b.erase(it);
            ans++;
            break;
        }  
    }
    cout << ans << "\n";
}
