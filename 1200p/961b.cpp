#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> a(n+1);
    vector<int> t(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    int base = 0;
    for (int i = 1; i <= n; i++) {
        cin >> t[i];
        if (t[i] == 1) {
            base += a[i];
        }
    }
    int left = 1;
    int right = k;
    int maxBonus = 0;
    int curBonus = 0;
    for (int i = left; i <= right; i++) {
        if (t[i] == 0) {
            curBonus += a[i];
        }
    }
    maxBonus = curBonus;
    // increase right side of the window and then check
    while (right < n) {
        right += 1;
        if (t[right] == 0) {
            curBonus += a[right];
        }
        if (t[left] == 0) {
            curBonus -= a[left];
        }
        left += 1;
        maxBonus = max(maxBonus, curBonus);
    }
    cout << base + maxBonus;
}
