// Problem: 112A Petya and Strings (Codeforces) - https://codeforces.com/problemset/problem/112/A
// Pattern: Strings
// Idea: Lowercase both strings, then compare them directly and print -1, 1 or 0.
// Time: O(n)  Space: O(1)
// Solved: 2026-11-25 (Day 3)
#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);

    if (a < b) {
        cout << -1;
    } else if (a > b) {
        cout << 1;
    } else {
        cout << 0;
    }

    return 0;
}