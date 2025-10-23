#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        // if(y%2==0&&y>x) cout<<"YES\n";
        // else cout<<"NO\n";
        long long int even =0,odd=0;
        for(int i =x;i<=y;i+=x){
            if(i%2==0) even+=i;
            else odd+=i;
        }
        if(even>=odd)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
