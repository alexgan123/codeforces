#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int d, s; cin >> d >> s;
    vector<int> mi(d);
    vector<int> mx(d);
    int misum = 0;
    int mxsum = 0;
    for (int i = 0; i < d; i++) {
        cin >> mi[i] >> mx[i];
        misum += mi[i];
        mxsum += mx[i];
    }
    if (s < misum) cout << "NO\n";
    else if (s > mxsum) cout << "NO\n";
    else {
        cout << "YES\n";
        int i = 0;
        int x = misum;
        while (x < s) {
            x++;
            while (mi[i] >= mx[i]) i++;
            mi[i]++;
        }
        for (int t : mi) cout << t << " ";
        cout << "\n";
    }
}
