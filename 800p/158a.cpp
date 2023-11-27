#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int a[51], n, k, minscore, ans;
int main() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> a[i];
    minscore = a[k];
    for (int i = 1; i <= n; i++) {
        if (a[i] >= minscore && a[i] > 0) ans++;
    }
    cout << ans << "\n";
}
