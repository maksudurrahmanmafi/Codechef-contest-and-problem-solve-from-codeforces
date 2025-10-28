#include <bits/stdc++.h>
using namespace std;
long long factorial(int n){
    long long result = 1;
    for(int i =2;i<=n;i++) result*=i;
    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n<2) {
            cout<< 0 <<"\n"; 
        }
        long long ans = factorial(n)/factorial(n-2);
        cout<<ans<<"\n";

    }
    return 0;
}
