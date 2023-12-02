#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t; cin >> t;
    while (t-- > 0) {
        int n; cin >> n;
        string s; cin >> s;
        int z = 0;
        for (char c : s) {
            if (c == '0') z++;
        }
        if (z % 2 == 0) {
            cout << "BOB\n";
        }
        else {
            cout << (z == 1 ? "BOB\n" : "ALICE\n");
        }
    }
}
