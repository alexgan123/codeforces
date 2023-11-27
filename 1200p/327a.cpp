#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, a[101], ps0[101], ps1[101], original, ans;
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        ps0[i] = (a[i] == 0 ? 1+ps0[i-1] : ps0[i-1]);
        ps1[i] = (a[i] == 1 ? 1+ps1[i-1] : ps1[i-1]);
    }
    original = ps1[n];
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j++) {
            int diff = (ps0[j]-ps0[i-1]) - (ps1[j]-ps1[i-1]);
            ans = max(ans, original + diff);
        }
    }
    cout << ans << "\n";
}
