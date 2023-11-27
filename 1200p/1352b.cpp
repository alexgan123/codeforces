#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t; cin >> t;
    for (int z = 0; z < t; z++) {
        int n, k; cin >> n >> k;
        if (n % 2 == 1 && k % 2 == 0) {
            cout << "NO\n";
            continue;
        }
        if (n % 2 == 1) {
            if (n < k) {
                cout << "NO\n";
            }
            else {
                cout << "YES\n";
                for (int i = 1; i <= k-1; i++) cout << "1 ";
                cout << n-k+1 << "\n";
            }
        }
        else if (n % 2 == 0) {
            if (k % 2 == 0) {
                if (n < k) cout << "NO\n";
                else {
                    cout << "YES\n";
                    for (int i = 1; i <= k-1; i++) cout << "1 ";
                    cout << n-k+1 << "\n";
                }
            }
            else {
                if (n < 2*k) cout << "NO\n";
                else {
                    cout << "YES\n";
                    for (int i = 1; i <= k-1; i++) cout << "2 ";
                    cout << n-(k-1)*2 << "\n";
                }
            }
        }
    }
}
