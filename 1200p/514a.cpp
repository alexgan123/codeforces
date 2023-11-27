#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    string x, ans; cin >> x;
    for (int i = 0; i < x.length(); i++) {
        char c = x[i];
        if (c <= '4') ans += c;
        else {
            if (i == 0 && c == '9') ans += c;
            else ans += '9' - c + '0';
        }
    }
    cout << stoll(ans) << "\n";
}
