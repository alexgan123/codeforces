#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n, k; cin >> n >> k;
    string s; cin >> s;
    unordered_set<char> c;
    for (int i = 0; i < k; i++) {
        char ch; cin >> ch;
        c.insert(ch);
    }
    ll ans = 0;
    ll l = 0;
    for (char ch : s) {
        if (c.find(ch) == c.end()) {
            ans += l * (l + 1) / 2;
            l = 0; 
        }
        else l++;
    }
    ans += l * (l + 1) / 2;
    cout << ans << "\n";
}
