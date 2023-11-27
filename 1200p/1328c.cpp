#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t; cin >> t;
    for (int z = 0; z < t; z++) {
        int n; string x; cin >> n >> x;
        string a, b;
        bool flag = false;
        for (char c : x) {
            if (!flag) {
                if (c == '2') {a += "1"; b += "1";}
                else if (c == '0') {a += "0"; b += "0";}
                else {a += "1"; b += "0"; flag = true;}
            }
            else {
                b += string(1, c); a += "0";
            }
        }
        cout << a << "\n" << b << "\n";
    }
}
