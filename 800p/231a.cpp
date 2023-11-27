#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n; cin >> n;
    int ans = 0;
    for (int i = 0, x; i < n; i++) {
        int cnt = 0;
        for (int j = 0; j < 3; j++) {
            cin >> x; if (x == 1) cnt++;
        }
        if (cnt >= 2) ans++;
    }
    cout << ans << "\n";
}
