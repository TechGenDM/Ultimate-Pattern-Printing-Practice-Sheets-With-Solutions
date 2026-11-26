// Problem: 263A Beautiful Matrix (Codeforces) - https://codeforces.com/problemset/problem/263/A
// Pattern: Implementation
// Idea: Find the cell with 1; moves needed = |row - 2| + |col - 2| (distance to the center).
// Time: O(1)  Space: O(1)
// Solved: 2026-11-26 (Day 4)

#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> x;

            if (x == 1) {
                cout << abs(i - 2) + abs(j - 2);
            }
        }
    }

    return 0;
}