#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t; cin >> t;
    while (t-- > 0) {
        int n; cin >> n;
        vector<int> a(n+2);
        for (int i = 0; i < n+2; i++) cin >> a[i];
        sort(a.begin(), a.end());
        ll sum = 0;
        for (int i = 0; i < n+1; i++) sum += a[i];
        bool f = false;
        for (int i = 0; i < n+1; i++) {
            if (sum - a[i] == a[n+1]) {
                for (int j = 0; j < n+1; j++) {
                    if (j != i) cout << a[j] << " ";
                }
                cout << "\n";
                f = true;
                break;
            }
        }
        if (!f) {
            if (sum - a[n] == a[n]) {
                for (int i = 0; i < n; i++) cout << a[i] << " ";
                cout << "\n";
            }
            else cout << "-1\n";
        }
    }
}
