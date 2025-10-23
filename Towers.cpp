#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>v(n);
    multiset<int>ml;
    for(int i =0;i<n;i++){
        
        cin>>v[i];
        
    }
    for(int i =0;i<n;i++){
        int cube =v[i];
        auto it = ml.upper_bound(cube);
        if(it!=ml.end()){
            ml.erase(it);
        }
        ml.insert(cube);
    }
    cout<<ml.size()<<"\n";
    return 0;
}
