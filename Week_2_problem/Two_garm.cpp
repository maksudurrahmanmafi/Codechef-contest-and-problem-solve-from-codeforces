#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    string s;
    cin >> s;

    map<string, int> mp;
    for (int i = 0; i < n - 1; i++)
    {
        string count = s.substr(i, 2);
        mp[count]++;
    }

    string ans;
    int mx = 0;

    for (auto [k, v] : mp)
    {
        if (v > mx)
        {
            mx = v;
            ans = k;
        }
    }

    cout << ans << "\n";
    return 0;
}
