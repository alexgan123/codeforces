#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t; cin >> t;
    while (t-- > 0) {
        int n, k; cin >> n >> k;
        if (n % 4 == 0) {
            cout << n/2 << " " << n/4 << " " << n/4 << "\n";
        }
        else if (n % 4 == 2) {
            cout << n/2 - 1 << " " << n/2 - 1 << " " << 2 << "\n";
        }
        else {
            cout << n/2 << " " << n/2 << " " << "1\n";
        }
    }
}
