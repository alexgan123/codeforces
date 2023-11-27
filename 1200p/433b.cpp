#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, m, v[100001];
ll psa[100001], upsa[100001];
int main() {
    cin >> n; vector<int> u(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        u[i] = v[i];
        psa[i] = v[i] + psa[i-1];
    }
    sort(u.begin(), u.end());
    for (int i = 1; i <= n; i++) upsa[i] = u[i] + upsa[i-1];
    cin >> m;
    for (int i = 0, type, l, r; i < m; i++) {
        cin >> type >> l >> r;
        if (type == 1) cout << psa[r] - psa[l-1] << "\n";
        else cout << upsa[r] - upsa[l-1] << "\n";
    }
}
