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
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        int day = 0;
        for (int i = 0; i < n; i++)
        {
            if(b[i]<=2*a[i] && a[i]<=2*b[i]) day++;
        }
        cout<<day<<'\n';
    }
    return 0;
}
