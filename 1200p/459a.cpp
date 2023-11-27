#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
    if (x1 == x2) {
        int sq = abs(y1 - y2);
        cout << x1 + sq << " " << y1 << " " << x1 + sq << " " << y2 << "\n";
    }
    else if (y1 == y2) {
        int sq = abs(x1- x2);
        cout << x1 << " " << y1 + sq << " " << x2 << " " << y1 + sq << "\n";
    }
    else {
        if (abs(x1 - x2) == abs(y1 - y2)) {
            cout << x2 << " " << y1 << " " << x1 << " " << y2 << "\n";
        }
        else cout << "-1\n";
    }
}
