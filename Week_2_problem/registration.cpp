#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    map<string, int> mp; 

    while (n--) {
        string name;
        cin >> name;

        if (mp.find(name) == mp.end()) {
            cout << "OK\n";
            mp[name] = 1; 
        } else {
            
            cout << name << mp[name] << "\n";
            mp[name]++; 
        }
    }

    return 0;
}
