#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t; cin >> t;
    while (t-- > 0) {
        int n; cin >> n;
        string s; cin >> s;
        bool z = false;
        bool o = false;
        int zi = 0;
        int oi = 0;
        for (int i = 0; i < s.length(); i++) {
            int j = ((int) s.length()) - 1 - i;
            if (s[i] == '1' && !o) {
                o = true;
                oi = i;
            }
            if (s[j] == '0' && !z) {
                z = true;
                zi = j;
            }
        }
        if (!(z && o)) {
            cout << s << "\n";
        }
        else {
            if (zi < oi) cout << s << "\n";
            else {
                for (int i = 0; i < s.length(); i++) {
                    if (!(i >= oi && i < zi)) cout << s[i];
                }
                cout << "\n";
            }
        }
    }
}
