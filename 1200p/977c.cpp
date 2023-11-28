#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n;
    int k;
    bool oneExists = false;
    cin >> n >> k;
    vector<int> a(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        if (a[i] == 1) oneExists = true;
    }
    sort(a.begin(), a.end());
    if (k == 0) {
        if (!oneExists) cout << "1\n";
        else cout << "-1\n";
        return 0;
    }
    if (k == n) {
        cout << a[k] << "\n";
    }
    else {
        if (a[k] == a[k+1]) cout << "-1\n";
        else cout << a[k] << "\n";
    }
}
