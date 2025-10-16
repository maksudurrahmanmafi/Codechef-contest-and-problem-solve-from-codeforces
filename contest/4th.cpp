#include <bits/stdc++.h>
using namespace std;
int gcnd(int x,int y){
    int mx = max(x,y);
    for(int k = mx -1;k>=1;k--){
        if(x%k!=0 && y %k !=0)return k;
    }
    return 1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        int max1 = 0, max2 = 0;

        // Read input and find top 2 largest numbers
        for(int i = 0; i < n; i++){
            cin >> v[i];
            if(v[i] > max1){
                max2 = max1;
                max1 = v[i];
            } else if(v[i] > max2){
                max2 = v[i];
            }
        }
        // int ans = 0;
        // for(int i = 0;i<min(5,n);i++){
        //     for(int j = i+1;j<min(10,n);j++){
        //         ans = max(ans,gcnd(v[i],v[j]));
        //     }
        // }
        int ans = gcnd(max1,max2);
        cout<<ans<<"\n";
    }
    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;

// // gcnd function
// int gcnd(int x, int y){
//     int mx = max(x, y);
//     for(int k = mx - 1; k >= 1; k--){
//         if(x % k != 0 && y % k != 0) return k;
//     }
//     return 1;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
    
//     int t;
//     cin >> t;
//     while(t--){
//         int n;
//         cin >> n;
//         vector<int> v(n);
//         int max1 = 0, max2 = 0;

//         // Read input and find top 2 largest numbers
//         for(int i = 0; i < n; i++){
//             cin >> v[i];
//             if(v[i] > max1){
//                 max2 = max1;
//                 max1 = v[i];
//             } else if(v[i] > max2){
//                 max2 = v[i];
//             }
//         }

//         // Compute gcnd only for top 2 numbers
//         int ans = gcnd(max1, max2);
//         cout << ans << "\n";
//     }
//     return 0;
// }
