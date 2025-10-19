// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }
//     set<int> st;
//     for (int i = 0; i < n; i++)
//     {
//         st.insert(v[i]);
//     }
//     cout<<st.size()<<'\n';
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    multiset<int>ml;
    for(int i =0;i<n;i++){
        int x;
        cin>>x;
        ml.insert(x);
    }
    int count = 0,prblm=1;
    while(!ml.empty()){
        auto lb = ml.lower_bound(prblm);
        if(lb!=ml.end()){
            count++;ml.erase(lb);
        }
        else break;
        prblm++;
    }
    cout<<count<<'\n';
    return 0;
}
