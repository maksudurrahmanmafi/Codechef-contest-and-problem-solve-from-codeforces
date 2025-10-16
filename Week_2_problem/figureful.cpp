#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    map<pair<int,int>, string> mp;

    for(int i = 0; i < n; i++){
        int a, b;
        string name;
        cin >> a >> b >> name;
        pair<int,int> p = make_pair(a,b); 
        mp[p] = name; 
    }

    int t;
    cin >> t;

    while(t--){
        int x, y;
        cin >> x >> y;
        pair<int,int> q = make_pair(x,y); 
    }

    return 0;
}
