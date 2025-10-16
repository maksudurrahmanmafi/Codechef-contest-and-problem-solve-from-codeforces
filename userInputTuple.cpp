#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    // cout << "Enter number of students: ";
    cin >> n;

    vector<tuple<int, string, double>> students(n);

    for (int i = 0; i < n; i++) {
        int age;
        string name;
        double cgpa;
        cin >> age >> name >> cgpa;
        students[i] = make_tuple(age, name, cgpa);
    }

    cout << "\nAll Students:\n";
    for (auto t : students) {
        cout << get<0>(t) << " " << get<1>(t) << " " << get<2>(t) << "\n";
    }
}
