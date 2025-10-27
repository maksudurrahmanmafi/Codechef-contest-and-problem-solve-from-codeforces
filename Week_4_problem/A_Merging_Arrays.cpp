#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    vector<int> v(n), b(m);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];
    vector<int> c(n + m);
    int i = 0, j = 0, cur = 0;
    while (i < n && j < m)
    {
        if (v[i] < b[j])
        {
            c[cur] = v[i];
            i++;
            cur++;
        }
        else
        {
            c[cur] = b[j];
            j++;
            cur++;
        }
    }
    while (i < n)
    {
        c[cur] = v[i];
        i++;
        cur++;
    }
    while (j < m)
    {
        c[cur] = b[j];
        j++;
        cur++;
    }
    for(int i =0;i<n+m;i++){
        cout<<c[i]<<" ";
    }
    return 0;
}
