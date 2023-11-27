#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t; cin >> t;
    for (int q = 0, n, x; q < t; q++) {
        cin >> n >> x;
        int l = n;
        int r = n;
        int sum = 0;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
            sum %= x;
            if (a[i] % x != 0) {
                l = min(l, i);
                r = min(r, n - 1 - i);
            }
        }
        if (sum % x != 0) {
            cout << n << "\n";
        }
        else {
            cout << n - min(l, r) - 1 << "\n";
        }
    }
}
