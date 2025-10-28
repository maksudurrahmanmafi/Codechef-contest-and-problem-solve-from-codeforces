#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s, tstr;
        cin >> s >> tstr;

        // 1️⃣ Check count of 0s and 1s
        if (count(s.begin(), s.end(), '0') != count(tstr.begin(), tstr.end(), '0')) {
            cout << "NO\n";
            continue;
        }

        // 2️⃣ Count mismatches
        int mismatch = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] != tstr[i]) mismatch++;
        }

        int min_swaps = mismatch / 2;

        // 3️⃣ Check conditions
        if (k < min_swaps) cout << "NO\n";
        else if ((k - min_swaps) % 2 == 0) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
