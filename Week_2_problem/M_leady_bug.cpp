// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         string a, b;
//         cin >> a >> b;

//         bool a_has1 = false, b_has1 = false;
//         for (char c : a) if (c == '1') a_has1 = true;
//         for (char c : b) if (c == '1') b_has1 = true;

//         if (!a_has1) {
//             cout << "YES\n";
//         } else if (b_has1) {
//             cout << "YES\n";
//         } else {
//             cout << "NO\n";
//         }
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;

        bool possible = false;

        for (int i = 0; i < n; i++) {
            if (a[i] == '1' && b[i] == '1') {
                possible = true;
                break;
            }
        }

        if (possible)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
