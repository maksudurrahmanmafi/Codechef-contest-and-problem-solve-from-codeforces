// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, c;
//         cin >> n >> c;
//         vector<ll> a(n), b(n);
//         for (int i = 0; i < n; i++)
//             cin >> a[i];
//         for (int i = 0; i < n; i++)
//             cin >> b[i];

//         ll ans = LLONG_MAX;
//         for (int shift = 0; shift < n; shift++)
//         {
//             {
//                 ll cost = shift * c;

//                 for (int j = 0; j < n; j++)
//                 {
//                     cost += a[j] * b[(j - shift+n) % n];
//                 }
//                 ans = min(ans, cost);
//             }
//         }
//         cout << ans << '\n';
//     }
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;
//     while (t--) {
//         int n, C;
//         cin >> n >> C;
//         vector<ll> B(n), D(n);
//         for (int i = 0; i < n; i++) cin >> B[i];
//         for (int i = 0; i < n; i++) cin >> D[i];

//         ll ans = LLONG_MAX;
//         for (int shift = 0; shift < n; shift++) {
//             ll cost = (ll) shift * C;
//             for (int i = 0; i < n; i++) {
//                 cost += B[(i + shift) % n] * D[i];
//             }
//             ans = min(ans, cost);
//         }
//         cout << ans << "\n";
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        int N, C;
        cin >> N >> C;
        vector<ll> B(N), D(N);
        for (int i = 0; i < N; i++) cin >> B[i];
        for (int i = 0; i < N; i++) cin >> D[i];

        ll ans = LLONG_MAX;

        // Try all possible number of right cyclic shifts
        for (int shift = 0; shift < N; shift++) {
            ll cost = (ll) shift * C;
            for (int i = 0; i < N; i++) {
                // After 'shift' right shifts, the value D[(i - shift + N) % N] should match A[i]
                cost += B[i] * D[(i - shift + N) % N];
            }
            ans = min(ans, cost);
        }
        cout << ans << "\n";
    }
    return 0;
}


