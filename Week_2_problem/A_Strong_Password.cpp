#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int i;
        for ( i = 1; i < s.size(); i++)
        {
            if (s[i] == s[i-1])
                break;
        }
        if (s[i-1] == 'a')
            s.insert(s.begin() + i, 'b');
        else
            s.insert(s.begin() + i, 'a');
        // // simple greedy: try to insert a different letter
        // // insert 'a' if s[0] != 'a', else insert 'b'
        // char c = 'a';
        // if (s[0] == 'a') c = 'b';

        // // insert at beginning (can be anywhere)
        // string ans = c + s;
        cout << s << "\n";
    }
}

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t; 
//     cin >> t;
//     while(t--)
//     {
//         string s;
//         cin >> s;
//         int i;
//         for(i=1;i<s.size();i++)
//         {
//             if(s[i] == s[i-1])
//                 break;
//         }
//         if(s[i-1] == 'a')
//             s.insert(s.begin()+i, 'b');
//         else
//             s.insert(s.begin()+i, 'a');
//         cout << s << endl;
//     }
//     return 0;
// }