#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, m, a, b;
int main() {
    cin >> n >> m >> a >> b;
    double ratio = (double) b / (double) m;
    if (ratio >= a) cout << n*a << "\n";
    else {
        cout << min(((n/m)*b)+((n%m)*a), ((n/m) + 1)*b) << "\n";
    }
}
