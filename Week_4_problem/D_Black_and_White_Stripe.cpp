#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int left = 0, right = 0;
        int white_count = 0;
        int min_white = INT_MAX;

        while(right < n) {
            // নতুন সেল যুক্ত করা
            if(s[right] == 'W') white_count++;

            // যখন উইন্ডোর দৈর্ঘ্য >= k
            if(right - left + 1 == k) {
                // উইন্ডোর সাদা সংখ্যা আপডেট
                min_white = min(min_white, white_count);

                // উইন্ডো বাম দিকের সেল বাদ দাও
                if(s[left] == 'W') white_count--;
                left++; // উইন্ডো স্লাইড করো
            }
            right++;
        }

        cout << min_white << "\n";
    }

    return 0;
}
