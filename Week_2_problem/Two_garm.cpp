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

    map<string, int> freq;
    for (int i = 0; i < n - 1; i++)
    {
        string two = s.substr(i, 2);
        freq[two]++;
    }

    string ans;
    int mx = 0;

    for (auto [k, v] : freq)
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
