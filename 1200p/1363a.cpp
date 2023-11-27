#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, x, t;
int main() {
    cin >> t;
    for (int z = 0; z < t; z++) {
        cin >> n >> x; bool flag = false; 
        int even = 0, odd = 0;
        for (int i = 1, a; i <= n; i++) {
            cin >> a;
            if (a % 2 == 0) even++;
            else odd++;
        }
        for (int i = 1; i <= min(odd, x); i += 2) {
            if (even >= x - i) {
                flag = true;
                cout << "Yes\n";
                break;
            }
        }
        if (!flag) cout << "No\n";
    }
}
