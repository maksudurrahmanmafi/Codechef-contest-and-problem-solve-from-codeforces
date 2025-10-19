#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<string> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    set<string> st;         // কোন নাম আগেই এসেছে তা রাখব
    vector<string> v;    // চ্যাটলিস্টে রাখার জন্য

    // উল্টো দিক থেকে চলব যাতে শেষবারের occurrence টা উপরে আসে
    for (int i = n - 1; i >= 0; i--) {
        if (st.find(a[i]) == st.end()) {
            st.insert(a[i]);
            v.push_back(a[i]);
        }
    }

    // উল্টো করে প্রিন্ট করব (top থেকে bottom)
    for (string x : v)
        cout << x << "\n";

    return 0;
}

// #include <bits/stdc++.h>
// using apace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n;
//     cin >> n;

//     deque<string> dq;
//     set<string> st;

//     vector<string> v(n);
//     for (int i = 0; i < n; i++)
//         cin >> v[i];

//     for (int i = n - 1; i >= 0; i--)
//     {

//         if (st.find(v[i]) == st.end())
//         {
//             dq.push_front(v[i]);
//             st.insert(v[i]);
//         }
//     }
    

//     for (auto x : dq)
//         cout << x << "\n";

//     return 0;
// }

