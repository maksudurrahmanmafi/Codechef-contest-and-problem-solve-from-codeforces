#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;

        if (a == b)
        {
            cout << 0 << "\n";
        }
        else if (a < b)
        {
            cout << -1 << "\n";
        }
        else
        {
            long long x = a ^ b;
            if (x <= a)
            {
                cout << 1 << "\n"
                     << x << "\n";
            }
            else
            {

                long long c = 1;
                while ((c << 1) <= a)
                    c <<= 1;
                long long d = (a ^ c) ^ b;
                cout << 2 << "\n"
                     << c << " " << d << "\n";
            }
        }
    }
    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while(t--) {
//         long long a, b;
//         cin >> a >> b;

//         if(a == b) {
//             cout << 0 << "\n";
//             continue;
//         }

//         if(a < b) {
//             long long x = a ^ b;
//             if(x <= a) {
//                 cout << 1 << "\n" << x << "\n";
//             } else {
//                 cout << -1 << "\n";
//             }
//         } else { // a > b
//             // choose largest power of 2 ≤ a
//             long long c = 1LL;
//             while((c << 1) <= a) c <<= 1;

//             long long new_a = a ^ c;
//             long long d = new_a ^ b;

//             cout << 2 << "\n" << c << " " << d << "\n";
//         }
//     }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;
//     while(t--){
//         long long a, b;
//         cin >> a >> b;

//         if(a == b){
//             cout << 0 << "\n"; // কোন অপারেশন লাগবে না
//         } else if(a < b){
//             cout << -1 << "\n"; // অসম্ভব
//         } else {
//             long long x = a ^ b;
//             if(x <= a){
//                 // 1টি অপারেশন যথেষ্ট
//                 cout << 1 << "\n" << x << "\n";
//             } else {
//                 // 2টি অপারেশন: উদাহরণ অনুযায়ী 25 এবং 779
//                 cout << 2 << "\n";
//                 cout << (a - b) << " " << (b ^ (a - b)) << "\n";
//             }
//         }
//     }
//     return 0;
// }
