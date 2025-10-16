#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){

        int n;
        cin>>n;
        string s;
        cin>>s;
        int f =-1,l=-1;
        f=s.find('B');
        l=s.rfind('B');
        int ans =l-f+1;
        cout<<ans<<'\n';
    }

    return 0;
}
