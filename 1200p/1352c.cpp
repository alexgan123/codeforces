#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int t, n, k;
int main() {
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n >> k;
        if (k % (n-1) == 0) cout << (k/(n-1))*n - 1 << "\n";
        else cout << (k/(n-1))*n + (k%(n-1)) << "\n";
    }
}
