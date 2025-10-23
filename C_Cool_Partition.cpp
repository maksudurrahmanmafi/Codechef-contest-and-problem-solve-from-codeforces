#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];

        set<int> st;
        set<int> temp;
        int ans = 1;

        st.insert(v[0]);
        for (int i = 1; i < n; i++)
        {
            auto it = st.find(v[i]);
            if (it != st.end())
            {
                st.erase(it);
                temp.insert(v[i]);
            }
            else
            {
                temp.insert(v[i]);
            }

            if (st.empty())
            {
                ans++;
                st = temp;
                temp.clear();
            }
        }

        cout << ans << '\n';
    }
    return 0;
} 