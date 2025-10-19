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
//         string s;
//         cin >> s;
//         deque<char> dq;

//         for (int i = 0; i < s.size(); i++)
//         {
//             if (s[i] == 'b')
//             {
//                 if (!dq.empty())
//                     dq.pop_back();
//             }

//             else if (s[i] == 'B')
//             {

//                 if (!dq.empty())
//                     dq.pop_front();
//             }
//             else
//                 dq.push_back(s[i]);
//         }
//         // for (int i = 0; i < dq.size(); i++)
//         // {
//         //     cout << dq << '\n';
//         // }
//         for (char c : dq)
//             cout << c;
//         cout << '\n';
//     }
//     return 0;
// }

// // #include <bits/stdc++.h>
// // using namespace std;

// // int main() {
// //     ios_base::sync_with_stdio(false);
// //     cin.tie(NULL);

// //     int t;
// //     cin >> t;

// //     while (t--) {
// //         string s;
// //         cin >> s;
// //         string new_string;

// //         for (char c : s) {
// //             if (c == 'b') {

// //                 for (int i = new_string.size() - 1; i >= 0; i--) {
// //                     if (islower(new_string[i])) {
// //                         new_string.erase(i, 1);
// //                         break;
// //                     }
// //                 }
// //             }
// //             else if (c == 'B') {

// //                 for (int i = new_string.size() - 1; i >= 0; i--) {
// //                     if (isupper(new_string[i])) {
// //                         new_string.erase(i, 1);
// //                         break;
// //                     }
// //                 }
// //             }
// //             else {
// //                 new_string.push_back(c);
// //             }
// //         }

// //         cout << new_string << '\n';
// //     }

// //     return 0;
// // }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        vector<pair<int, char> > upper, lower;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'b')
            {
                if (!lower.empty())
                    lower.pop_back();
            }
            else if (s[i] == 'B')
            {
                if (!upper.empty())
                    upper.pop_back();
            }
            else if (islower(s[i]))
                lower.push_back(make_pair(i, s[i]));
            else
                upper.push_back(make_pair(i, s[i]));
        }
        vector<pair<int,char> > all = upper;
        all.insert(all.end(), lower.begin(), lower.end());

        // Sort by original index
        sort(all.begin(), all.end());

        // Output
        for (pair<int,char> p : all) cout << p.second;
        cout << '\n';
    }
    return 0;
}
