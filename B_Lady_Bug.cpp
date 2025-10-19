// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         string a, b;
//         cin >> a >> b;
//         if (a == b)
//         {
//             cout << "YES\n";
//             continue;
//         }
//         int count = 0;
//         int count1 = 0;
//         for (auto c : a)
//         {
//             if (c == '1')
//                 count1++;
//         }
//         for (auto c : b)
//         {
//             if (c == '0')
//                 count++;
//         }
//         if(count1==1) cout<<"YES\n";

//         else if (count == count1)
//             cout << "YES\n";
//         else
//             cout << "NO\n";
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;

        int zeros_a = count(a.begin(), a.end(), '0');
        int zeros_b = count(b.begin(), b.end(), '0');

        if (zeros_a + zeros_b >= n)
            cout << "YES\n"; // Lady Bug can crack the password
        else
            cout << "NO\n";  // Impossible
    }

    return 0;
}


