#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isvowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y');
}
int main() {
    string s; cin >> s;
    string ans = "";
    for (char c : s) {
        if (isvowel(c)) {
            continue;
        }
        ans += ".";
        ans += tolower(c);
    }
    cout << ans << "\n";
}
