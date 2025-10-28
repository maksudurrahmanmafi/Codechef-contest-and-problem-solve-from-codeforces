// #include <bits/stdc++.h>
// using namespace std;
// bool win(char a, char b)
// {
//     return (a == 'R' && b == 'S') || (a == 'S' && b == 'P') || (a == 'P' && b == 'R');
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NUll);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         string a, b;
//         cin >> a >> b;
//         int chef = 0, chefina = 0;
//         for (int i = 0; i < n; i++)
//         {
//             if (win(a[i], b[i]))
//                 chef++;
//             else if (win(b[i], a[i]))
//                 chefina++;
//         }
//         int ans;
//         if (chef < chefina)
//         {
//             // Chef ইতিমধ্যেই জিতছে
//             ans = (chefina - chef)+1 ;

//         }
//         else if( chef == chefina) ans =0;
//         else if(chefina<chef)
//         {
//             // ChefWin + ans > ChefinaWin
//             // ans = ChefinaWin - ChefWin + 1
//             // ans = (chefina - chef)+1 ;
//             ans = 0;

//         }

//         cout << ans << "\n";
//         // int ans = max(0,chefina - chef);
//         // cout<<ans<<'\n';
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

bool win(char a, char b) {
    return (a=='R' && b=='S') || (a=='S' && b=='P') || (a=='P' && b=='R');
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
  
    while(t--) {
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;

        int chef = 0, chefina = 0, draw = 0;
        for(int i = 0; i < n; ++i) {
            if(win(a[i], b[i])) chef++;
            else if(win(b[i], a[i])) chefina++;
            else draw++;
        }

        int diff = chef - chefina;
        if(diff > 0) {
            cout << 0 << '\n';
            continue;
        }

        int required = - diff + 1; 
        int l = chefina; 
        int d = draw;

       
        if(2 * l >= required) {
           
            int ans = (required + 1) / 2;
            cout << ans << '\n';
        } else {
            
            int remaining = required - 2 * l;
            int ans = l + remaining; 
            cout << ans << '\n';
        }
    }

    return 0;
}
