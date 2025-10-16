#include <bits/stdc++.h>
using namespace std;
#define ll long long int

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
        // vector<ll> even, odd;
        for (int i = 0; i < n; i++)
        {
             if (i % 2 == 0) {
                // even index → বড় সংখ্যা থেকে
                cout << n - i/2 << " ";
            } else {
                // odd index → ছোট সংখ্যা থেকে
                cout << (i+1)/2 << " ";
            }
        }
        //  for (auto x : odd)
        //     cout << x << " ";
        // for (auto x : even)
        //     cout << x << " ";
       
        cout << '\n';
    }
    return 0;
}
