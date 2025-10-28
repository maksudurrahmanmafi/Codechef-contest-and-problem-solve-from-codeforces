// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         vector<int>v(n);
//         for(int i =0;i<n;i++) cin>>v[i];
//         vector<int>odd,even;
//         for(int x: v){
//             if(x%2!=0 )odd.push_back(x);
//             else even.push_back(x);

//         }
//         sort(odd.begin(),odd.end());
//         sort(odd.begin(),odd.end());
//         int oi =0, ei =0;
//         for(int x:v){
//             if(x%2!=0) cout<<odd[oi++]<<" ";
//             else cout<<even[ei++]<<" ";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }

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
        cin >> n;
        vector<int> v(n);
        bool even = false, odd = false;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if(v[i]%2==0) even = true;
            else odd = true;
        }
        if(even && odd) sort(v.begin(),v.end());
        for(int x : v) cout<<x<<" ";
        cout<<'\n';
    }
    return 0;
}
