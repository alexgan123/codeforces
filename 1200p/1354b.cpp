#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t; cin >> t;
    for (int q = 0; q < t; q++) {
        string s; cin >> s;
        int ans = INT_MAX;
        vector<pair<int, int>> r;
        for (char c : s) {
            if (r.empty()) r.push_back({c - '0', 1});
            else {
                if (r.back().first == c - '0') r[r.size() - 1].second++;
                else {
                    r.push_back({c - '0', 1});
                    if (r.size() < 3) continue;
                    if (r[r.size() - 3].first != r[r.size() - 1].first) ans = min(ans, r[r.size() - 2].second + 2);
                }
            }
        }
        if (ans == INT_MAX) cout << "0\n";
        else cout << ans << "\n";
    }
}
