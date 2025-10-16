#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    deque<int> dq;
    bool rev = false; 

    for (int i = 0; i < n; i++)
    {
        if (!rev)
            dq.push_back(a[i]);
        else
            dq.push_front(a[i]);
        rev = !rev; 
    }

    if (rev)
        reverse(dq.begin(), dq.end());

    for (int x : dq)
        cout << x << " ";
    cout << "\n";
}
