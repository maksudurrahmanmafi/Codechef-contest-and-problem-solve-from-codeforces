#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    deque<int> dq(n);
    for (int i = 0; i < n; i++)
        cin >> dq[i];
    int seraj = 0, dima = 0, who = 1;
    while (!dq.empty())
    {
        int l = dq.front(), r = dq.back(), mx;
        mx = max(l, r);
        if (who % 2 != 0)
            seraj += mx;
        else
            dima += mx;
        if(mx==l) dq.pop_front();
        else dq.pop_back();
        who++;
        }
        cout<<seraj<<" "<<dima<<'\n';

    return 0;
}
