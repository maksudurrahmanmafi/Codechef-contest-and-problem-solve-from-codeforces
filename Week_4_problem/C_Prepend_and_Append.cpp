#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        int l =0;
        int r = n-1;
        while(l<r && s[l] != s[r]){
            l++;
            r--;
        }
        if(l>r) cout<<0<<'\n';
        else cout<< (r-l +1)<<'\n';
    }
    return 0;
}
