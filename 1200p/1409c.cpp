#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t; cin >> t;
    while (t-- > 0) {
        int n, x, y; cin >> n >> x >> y;
        int m = -1;
        bool f = false;
        for (int i = 1; i <= y-x; i++) {
            if ((y-x) % i != 0) continue;
            if (((y-x) / i) + 1 > n) continue;
            if (((y-x) / i) + 1 == n) {
                for (int j = x; j <= y; j += i) {
                    cout << j << " ";
                }
                cout << "\n";
                f = true;
                break;
            }
            if (((y-x) / i) + 1 < n) {
                int j = x - (i*(n - (((y-x) / i) + 1)));
                if (j < 1) {
                    if (m == -1) m = i;
                    continue;
                }
                for (int k = j; k <= y; k += i) {
                    cout << k << " ";
                }
                cout << "\n";
                f = true;
                break;
            }
        }
        if (!f) {
            int i = x;
            while (true) {
                if (i - m > 0) i -= m;
                else break;
            }
            for (int j = 0; j < n; j++) {
                cout << i + (j*m) << " ";
            }
            cout << "\n";
        }
    }
}
