// Problem: 282A Bit++ (Codeforces) - https://codeforces.com/problemset/problem/282/A
// Pattern: Implementation
// Idea: The middle character of each statement tells the op: '+' means x++, otherwise x--.
// Time: O(n)  Space: O(1)
// Solved: 2026-11-25 (Day 3)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int x = 0;
    string s;

    for (int i = 0; i < n; i++) {
        cin >> s;

        if (s[1] == '+') {
            x++;
        } else {
            x--;
        } 
    }

    cout << x << endl;

    return 0;
}