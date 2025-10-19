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
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        set<int> st;
        int cnt = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (st.count(a[i]))
                break;
            else
            {
                st.insert(a[i]);
                cnt++;
            }
        }

        cout << n - cnt << "\n";
    }
    return 0;
}
