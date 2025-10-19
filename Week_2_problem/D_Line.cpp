#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        ll total = 0;
        vector<ll> v;

        for (int i = 0; i < n; i++) {
            // If looking left, current = i, best = n-1-i
            // If looking right, current = n-1-i, best = i
            if (s[i] == 'L') {
                total += i;
                v.push_back((n - 1 - i) - i);
            } else {
                total += (n - 1 - i);
                v.push_back(i - (n - 1 - i));
            }
        }

        // Sort by biggest improvement first
        sort(v.rbegin(), v.rend());

        ll cur = total;
        for (int i = 0; i < n; i++) {
            if (v[i] > 0) cur += v[i];
            cout << cur << " ";
        }
        cout << "\n";
    }
}
