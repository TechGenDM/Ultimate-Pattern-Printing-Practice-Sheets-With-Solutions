// Problem: 281A Word Capitalization (Codeforces) - https://codeforces.com/problemset/problem/281/A
// Pattern: Strings
// Idea: Uppercase only the first character with toupper and print the rest unchanged.
// Time: O(n)  Space: O(n)
// Solved: 2026-11-27 (Day 5)
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    s[0] = toupper(s[0]);

    cout << s << endl;

    return 0;
}