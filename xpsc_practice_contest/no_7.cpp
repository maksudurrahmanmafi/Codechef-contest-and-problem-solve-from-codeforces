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
        int even =0,odd=0;
        for(auto x:s){
            if(x=='0') even++;
            else odd++;
        }
        int win = min(even,odd);
        if(win%2!=0) cout<<"Zlatan\n";
        else cout<<"Ramos\n";
    }
    return 0;
}
