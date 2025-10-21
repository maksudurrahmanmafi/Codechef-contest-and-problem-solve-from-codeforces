#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, t;
    cin >> n >> t;
    multiset<long long> ml;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ml.insert(x);
    }
    while (t--)
    {
        int cmd;
        cin >> cmd;
        if (cmd == 0)
        {
            int x;
            cin >> x;
            ml.insert(x);
        }
        else if (cmd == 1)
        {
            if (!ml.empty())
            {
                auto it = ml.begin();
                cout << *it << '\n';
                ml.erase(it);
            }
        }
        else
        {
            if (!ml.empty())
            {
                auto it = prev(ml.end());
                cout << *it << '\n';
                ml.erase(it);
            }
        }
    }
    return 0;
}
