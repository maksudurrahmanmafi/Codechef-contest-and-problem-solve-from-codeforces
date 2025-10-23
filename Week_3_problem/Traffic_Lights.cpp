// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int n, x;
//     cin >> n >> x;
//     set<int> li;
//     multiset<int> dis;
//     li.insert(0);
//     li.insert(x);
//     dis.insert(x);
//     for (int i = 0; i < n; i++)
//     {
//         int p;
//         cin >> p;
//         auto it = li.upper_bound(p);
//         int r = *it;
//         it--;
//         int l = *it;
//         dis.erase(dis.find(r - l));
//         dis.insert(r - p);
//         dis.insert(p - l);
//         li.insert(p);
//         cout << *dis.rbegin() << " ";
//         cout << '\n';
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x, n;
    cin >> x >> n;

    set<int> li;
    multiset<int> dis;

    // ✅ properly insert 0 and x
    li.insert(0);
    li.insert(x);
    dis.insert(x);

    for (int i = 0; i < n; i++) {
        int p;
        cin >> p;

        auto it = li.upper_bound(p);
        int r = *it;
        it--;
        int l = *it;

        dis.erase(dis.find(r - l));
        dis.insert(r - p);
        dis.insert(p - l);
        li.insert(p);

        cout << *dis.rbegin() << " ";
    }
    cout << '\n';

    return 0;
}
