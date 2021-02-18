#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    string s;
    cin >> t;
    while (t--) {
        cin >> s;
        int cnt = 0;
        for (char c : s) {
            if (c == '4') cnt++;
        }
        cout << cnt << "\n";
    }
    return 0;
}

