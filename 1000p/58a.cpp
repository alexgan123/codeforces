#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
char word[] {'h', 'e', 'l', 'l', 'o'};
int main() {
    string s; cin >> s;
    int i = 0;
    for (char c : s) {
        if (c == word[i]) {
            i++;
            if (i > 4) break;
        }
    }
    cout << (i == 5 ? "YES\n" : "NO\n");
}
