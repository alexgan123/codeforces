#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t; cin >> t;
    while (t-- > 0) {
        int n; cin >> n;
        int pb = 0;
        int cb = 0;
        bool ans = true;
        for (int i = 0; i < n; i++) {
            int p, c; cin >> p >> c;
            if (p < pb || c < cb) ans = false;
            if (p - pb < c - cb) ans = false;
            pb = p;
            cb = c;
        }
        cout << (ans ? "YES\n" : "NO\n");
    }
}
