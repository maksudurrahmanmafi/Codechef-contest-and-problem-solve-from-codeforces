#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i =0;i<n;i++)
            cin >> a[i];
        set<ll> st(a.begin(), a.end());
        if (st.size() < n)
        {
            cout << "YES\n";
            continue;
        }
        int even = 0, odd = 0;
        for (auto x : st)
        {
            if (x % 2 == 0)
                even++;
            else
                odd++;
        }
        if (even >= 2 || odd >= 2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
