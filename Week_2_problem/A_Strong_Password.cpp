#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        // simple greedy: try to insert a different letter
        // insert 'a' if s[0] != 'a', else insert 'b'
        char c = 'a';
        if (s[0] == 'a') c = 'b';

        // insert at beginning (can be anywhere)
        string ans = c + s;
        cout << ans << "\n";
    }
}
