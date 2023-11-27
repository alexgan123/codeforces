#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    for (int q = 0; q < t; q++) {
        int n; cin >> n;
        vector<int> a;
        for (int i = 0, ai; i < n; i++) {
            cin >> ai; a.push_back(ai);
        }
        
        int ans = 0;
        bool inc = true;
        for (int i = a.size() - 1; i >= 1; i--) {
            if (inc) {
                if (a[i-1] < a[i]) inc = false;
            }
            else {
                if (a[i-1] > a[i]) {
                    ans = i;
                    break;
                }
            }
        }
        cout << ans << "\n";
    }
}
