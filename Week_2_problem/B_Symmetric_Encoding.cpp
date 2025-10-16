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
        set<char> st;
        for (char c : s)
            st.insert(c);
        string t ;
        for (char c : st) t+=c;
        map<char,char>mp;
        int len = t.size();
        for(int i =0;i<len;i++){
            mp[t[i]] = t[len-i-1];
        }
        string x;
        for(char c: s) x+=mp[c];
        cout<<x<<'\n';

    }
    return 0;
}
