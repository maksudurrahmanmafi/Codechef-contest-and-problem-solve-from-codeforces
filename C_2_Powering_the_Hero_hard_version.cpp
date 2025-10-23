#include <bits/stdc++.h>
using namespace std;
#define ll long long

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
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        priority_queue<ll> pq;
        ll total = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] > 0)
                pq.push(v[i]);

            else
            {
                if (!pq.empty())
                {
                    total += pq.top();
                    pq.pop();
                }
            }
        }
        cout << total << "\n";
    }
    return 0;
}
