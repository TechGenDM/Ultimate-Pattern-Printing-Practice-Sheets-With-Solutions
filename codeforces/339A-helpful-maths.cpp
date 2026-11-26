// Problem: 339A Helpful Maths (Codeforces) - https://codeforces.com/problemset/problem/339/A
// Pattern: Sorting
// Idea: Drop the '+' signs, sort the digits, then print them back with '+' between each.
// Time: O(n log n)  Space: O(n)
// Solved: 2026-11-26 (Day 4)

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    string nums = "";

    for (char c: s) {
        if (c != '+') {
            nums += c;
        }
    }

    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i];

        if (i != nums.size() - 1) {
            cout << "+";
        }
    }

    return 0;
}