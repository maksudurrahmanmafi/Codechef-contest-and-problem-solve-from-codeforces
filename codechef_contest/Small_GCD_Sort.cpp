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
        int val[105],order[105];
        for(int i =1;i<=n;i++){
            val[i] =__gcd(i,n);
            order[i]=i;
        }
        for(int i =1;i<=n;i++){
            for(int j = i+1;j<=n;j++){
                if(val[i]<val[j]||(val[i]==val[j]&&order[i]>order[j])){
                    swap(val[i],val[j]);
                    swap(order[i],order[j]);
                }
            }
        }
        for (int i = 1; i <=n; i++)
        {
            cout<<order[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
