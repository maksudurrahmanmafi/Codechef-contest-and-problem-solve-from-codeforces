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
//         multiset<int> ml;
//         for (int i = 0; i < n; i++)
//         {
//             int x;
//             cin >> x;
//             ml.insert(x);
//         }
//         map<int, int> mp;
//         for (auto x : ml)
//             mp[x]++;
//         int mx = 0;
//         for (auto it : mp)
//             mx = max(mx, it.second);

//          cout<<mx<<"\n";   
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; // টেস্ট কেসের সংখ্যা

    while (t--) {
        int n;
        cin >> n; // ডলের সংখ্যা
        multiset<int> ml;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            ml.insert(x);
        }

        int cnt = 0;

        // যতক্ষণ পর্যন্ত multiset খালি না হয়
        while (!ml.empty()) {
            int current = *ml.begin(); // সবচেয়ে ছোট ডল
            ml.erase(ml.begin());   // use করলাম
            
            int next = current + 1;

            // consecutive sizes খুঁজে sequentially remove করবো
            while (ml.find(next) != ml.end()) {
                ml.erase(ml.find(next));
                next++;
            }
            cnt++; // একটি সম্পূর্ণ set তৈরি হলো
        }

        cout << cnt << "\n"; // ন্যূনতম সেটের সংখ্যা
    }

    return 0;
}

