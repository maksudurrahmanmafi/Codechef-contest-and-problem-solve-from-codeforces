#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    set<int> st;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (a == 1)
            st.insert(b);
        else if (a == 2)
        {
            if (!st.empty())
                st.erase(b);
        }
        else
        {
            if (st.find(b) != st.end())
                cout << "Yes\n";
            else
                cout << "No\n";
        }
    }
    return 0;
}
