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
        int x =n;

        cout << 2 << '\n'; 

       
        for (int i = n-1; i >= 1; i--) {
            cout << i << " " << x << '\n';
            x = (x + i + 1) / 2;
        }
    }

    return 0;
}

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

//         cout << 2 << '\n'; // final result always 2 for n >= 2
//         int x = n, y = n - 1;

//         for (int i = n - 2; i >= 1; i--) {


//             x = (x + y + 1) / 2; // ceil((x + y)/2)
//             y = i;

//             cout << x << " " << y << '\n';



//         }
//         cout << x << " " << y << '\n';
//     }
// }

