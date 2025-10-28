#include <bits/stdc++.h>
using namespace std;
bool vowel(char c){
    return c=='A' || c== 'E'||c=='I'||c=='O'|| c=='u';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;

        string target = "CODETOWN";
        bool flag = true;
        for(int i =0;i<target.size();i++){
            if(vowel(s[i]) != vowel(target[i])){
                flag = false;
                break;

            }
        }
        if(flag) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
