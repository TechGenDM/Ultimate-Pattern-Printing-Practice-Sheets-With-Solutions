// Problem: 4A Watermelon (Codeforces) - https://codeforces.com/problemset/problem/4/A
// Pattern: Math (even/odd check)
// Idea: Weight must be even AND more than 2, so both halves can be even.
// Time: O(1)  Space: O(1)
// Solved: 2026-11-23 (Day 1)
#include <iostream>

using namespace std;

int main() {
    int w;
    cin >> w;

    if (w > 2 && w % 2 == 0) {
        cout << "YES" << '\n';
    } else {
        cout << "NO" << '\n';
    }

    return 0; 
}
