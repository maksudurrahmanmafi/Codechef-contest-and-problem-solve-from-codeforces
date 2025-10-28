#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        int mul = x*y;
        int ans = mul/2;
        if(z>ans) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
