#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, t;
    cin >> n >> t;
    vector<priority_queue<int> > pq(n);
    while (t--)
    {
        int cmd, c;
        cin >> cmd >> c;
        // c--;
        if (c < 0 || c >= n) continue;
        if (cmd == 0)
        {
            int x;
            cin >> x;
            pq[c].push(x);
        }
        else if (cmd == 1)
        {
            if (!pq[c].empty())
                cout << pq[c].top() << '\n';
        }
        else
        {
            if (!pq[c].empty())
                pq[c].pop();
        }
    }
    return 0;
}
