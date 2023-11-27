#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;
int main() {
    cin >> n;
    vector<int> a(n+1), psa(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        psa[i] = a[i] + psa[i-1];
    }
    int m; cin >> m;
    for (int i = 1, q; i <= m; i++) {
        cin >> q;
        cout << lower_bound(psa.begin(), psa.end(), q) - psa.begin() << "\n";
    }
}
