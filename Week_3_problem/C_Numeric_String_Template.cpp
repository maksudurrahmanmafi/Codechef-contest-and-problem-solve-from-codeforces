#include <bits/stdc++.h>
using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);


   int t;
   cin >> t;

   while (t--)
   {
      int n;
      cin >> n;
      vector<int> arr(n);
      for (int i = 0; i < n; i++)
      {
         cin >> arr[i];
      }
      int m;
      cin >> m;
      while (m--)
      {
         string st;
         cin >> st;

         if (st.size() != n)
         {
           cout << "NO" <<'\n';
            continue;
         }

         map<int, char> num_to_char;
         map<char, int> char_to_num;

         for (int i = 0; i < n; i++)
         {
            num_to_char[arr[i]] = st[i];
            char_to_num[st[i]] = arr[i];
         }

         // for (auto [x, y] : char_to_num) {
         //    cout << x << " " << y << '\n';
         // }
         bool ok = true;



         for (int i = 0; i < n; i++)
         {
            int num = arr[i];
            char c = st[i];

            if (num_to_char[num] != c)
            {
               ok = false;
               break;
            }

            if (char_to_num[c] != num)
            {
               ok = false;
               break;
            }
         }
         if (ok)
         {
            cout << "YES" << '\n';
         }
         else
         {
            cout << "NO" <<'\n';
         }

      }
   }

   return 0;
} 