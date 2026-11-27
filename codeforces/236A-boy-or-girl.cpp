// Problem: 236A Boy or Girl (Codeforces) - https://codeforces.com/problemset/problem/236/A
// Pattern: Hashing
// Idea: Put every letter in a set to count distinct letters; even count means female, odd means male.
// Time: O(n)  Space: O(1) (at most 26 letters)
// Solved: 2026-11-27 (Day 5)
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    set<char> st;

    for (int i = 0; i < s.size(); i++) {
        st.insert(s[i]);
    }

    if (st.size() % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }
                
    return 0;
}