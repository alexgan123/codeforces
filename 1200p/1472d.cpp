#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t; cin >> t;
    while (t-- > 0) {
        int n; cin >> n;
        vector<int> a(n);
        ll sa = 0;
        ll sb = 0;
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end());
        bool turn = true;
        while (!a.empty()) {
            int x = a.back();
            if (x % 2 == 0) {
                if (turn) sa += x;
            }
            else {
                if (!turn) sb += x;
            }
            a.pop_back();
            turn = !turn;
        }
        if (sa > sb) cout << "Alice\n";
        else if (sa < sb) cout << "Bob\n";
        else cout << "Tie\n";
    }
}
