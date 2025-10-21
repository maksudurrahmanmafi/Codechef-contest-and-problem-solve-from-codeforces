#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    multiset<int> ml;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ml.insert(x);
    }
    for (int i = 0; i < m; i++){
        int v;
        cin>>v;
        auto it =ml.upper_bound(v);
        if(it == ml.begin()) cout<<-1<<'\n';
        else{
            it--;
            cout<<*it<<'\n';
            ml.erase(it);
        }

    }

    return 0;
}
