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

        int n, x, k;
        cin >> n >> x >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.rbegin(), v.rend());

        // for (int i = 0; i < k&&i<n; i++)
        // {
        //     v[i] = 0;
        // }
        for (int i = 0; i < n && k > 0; i++)
        {
            if (v[i] > x)
            {
                v[i] = 0;
                x+=100;
                k--;
            }
        }

       
        int better = 0;
        for (int sc : v)
        {
            if (sc > x)
                better++;
        }
        // if(k%2!=0) cout<<better<<'\n';
        // else
        cout << better + 1 << "\n";
    }
    return 0;
}
