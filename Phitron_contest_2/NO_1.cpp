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
        int mint = z*24*60;
        if(mul<=mint) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
