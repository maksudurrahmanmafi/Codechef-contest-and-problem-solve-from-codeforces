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
        int n, k, l;
        cin >> n >> k >> l;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int mi, li;
            cin >> mi >> li;
            if (li == l)
                v.push_back(mi);
        }
        if (v.size() < k)
            cout << -1 << '\n';
        else
        {
            sort(v.rbegin(), v.rend());
            int sum = 0;
            for (int i = 0; i < k; i++)
                sum += v[i];
            cout << sum << '\n';
        }
    }
    return 0;
}
