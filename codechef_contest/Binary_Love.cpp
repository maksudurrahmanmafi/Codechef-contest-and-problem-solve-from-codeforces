

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
        string s;
        cin >> n >> s;
        int cnt1 = 0,  cnt2 = 0;
        for (int i = 0; i + 1 < s.size(); i++)
        {
            if (s[i] == '0' && s[i + 1] == '1')
                cnt1++;
            if (s[i] == '1' && s[i + 1] == '0')
                cnt2++;
        }
        if(cnt1 ==0||cnt2==0) cout<<"Bob\n";
        else if(cnt1==cnt2) cout<<"Alice\n";
        else cout<<"Alice\n";
        /* code */
    }

    return 0;
}
