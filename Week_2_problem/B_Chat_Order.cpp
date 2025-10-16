#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    set<string> st;
    while (n--)
    {
        string s;
        cin >> s;
        st.insert(s);
    }
    for (auto x : st)
        cout << x << '\n';
    return 0;
}
