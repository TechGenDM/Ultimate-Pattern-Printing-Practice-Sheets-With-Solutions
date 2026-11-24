// Problem: 231A Team (Codeforces) - https://codeforces.com/problemset/problem/231/A
// Pattern: Implementation
// Idea: For each problem, add the three 0/1 votes; if the sum is at least 2, the team solves it.
// Time: O(n)  Space: O(1)
// Solved: 2026-11-24 (Day 2)
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int count = 0;

    for (int i = 0; i < n; i++) {
        int a, b, c;
        cin >> a >> b >> c;

        if (a + b + c >= 2) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}