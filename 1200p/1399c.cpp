#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, t;
int main() {
    cin >> t;
    for (int z = 0; z < t; z++) {
        cin >> n;
        vector<int> f(n+1);
        for (int i = 0, w; i < n; i++) {
            cin >> w; f[w]++;
        }
        int maxcnt = 0;
        for (int i = 2; i <= n*2; i++) {
            int cnt = 0;
            for (int j = 1; j <= i/2; j++) {
                int k = i-j;
                if (!(k >= 1 && k <= n)) continue;
                if (j == k) cnt += f[j]/2;
                else cnt += min(f[j], f[k]);
            }
            maxcnt = max(maxcnt, cnt);
        }
        cout << maxcnt << "\n";
    }
}
