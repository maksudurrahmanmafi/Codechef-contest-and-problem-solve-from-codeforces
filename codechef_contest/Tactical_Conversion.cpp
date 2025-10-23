#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        bool found = false;
        for (int i = 1; i < n; i++)
        {
            if (s[i] == '1' && s[i - 1] == '1')
            {
                found = true;
                break;
            }
        }
        if (found)
            cout << "NO\n";
        else
            cout << "YES\n";
    }

    return 0;
}


