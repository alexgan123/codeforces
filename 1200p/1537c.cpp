#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t; cin >> t;
    while (t-- > 0) {
        int n; cin >> n;
        vector<int> a(n+1);
        for (int i = 1; i <= n; i++) cin >> a[i];
        sort(a.begin(), a.end());
        if (n == 2) {
            cout << a[1] << " " << a[2] << "\n";
            continue;
        }
        int mindiff = INT_MAX;
        int ind = 0;
        for (int i = 1; i < n; i++) {
            if (a[i+1] - a[i] < mindiff) {
                mindiff = a[i+1] - a[i];
                ind = i;
            }
        }
        for (int i = ind+1; i <= ind + n; i++) {
            if (i <= n) cout << a[i] << " ";
            else cout << a[i-n] << " ";
        }
        cout << "\n";
    }
}