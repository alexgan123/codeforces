#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

double n, l;
set<int> lan;
double ans = 0;
int main() {
    cin >> n >> l;
    for (int i = 0, x; i < n; i++) {
        cin >> x; lan.insert(x);
    }
    for (auto it = lan.begin(); it != lan.end(); it++) {
        double dist = *it;
        if (it == lan.begin()) {
            ans = max(ans, dist);
        }
        else {
            auto it_prev = it; it_prev--;
            double dist_prev = *it_prev;
            ans = max(ans, (dist - dist_prev)/2.0);
        }
        if (next(it) == lan.end()) ans = max(ans, (l - dist));
    }
    cout.precision(18);
    cout << ans << "\n";
}
