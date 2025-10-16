#include <bits/stdc++.h>
#include <tuple>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
     set<tuple<string, string> > leaves; 
    while(n--){
        string a,b;
        cin>>a>>b;
        leaves.insert(make_tuple(a, b));

    }
    cout<<leaves.size();
    return 0;
}
