#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t; cin >> t;
    while (t-- > 0) {
        int n; cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end());
        int j = 0;
        bool f = true;
        int pos = n / 2;
        int init = pos;
        while (pos >= 0 && pos < n) {
            cout << a[pos] << " ";
            if (f) j++;
            f = !f;
            j *= -1;
            pos = init + j;
        }
        cout << "\n";
    }
}
