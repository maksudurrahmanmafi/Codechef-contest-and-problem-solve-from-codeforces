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
//         vector<int> a(n);
//         for (int i = 0; i < n; i++) cin >> a[i];

//         int l = -1, r = -1;
//         for (int i = 1; i < n - 1; i++) {
//             if ((a[i - 1] < a[i] && a[i] > a[i + 1]) || 
//                 (a[i - 1] > a[i] && a[i] < a[i + 1])) {
//                 l = i;
//                 r = i + 2;
//                 break;
//             }
//         }

//         if (l == -1)
//             cout << -1 << "\n";
//         else
//             cout << l << " " << r << "\n";
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
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int l = -1, r = -1;
        for (int i = 1; i < n - 1; i++) {
            if ((a[i - 1] < a[i] && a[i] > a[i + 1]) ||
                (a[i - 1] > a[i] && a[i] < a[i + 1])) {
                l = i;
                r = i + 2;
                break;
            }
        }

        if (l == -1)
            cout << -1 << "\n";
        else
            cout << l << " " << r << "\n";
    }
    return 0;
}

