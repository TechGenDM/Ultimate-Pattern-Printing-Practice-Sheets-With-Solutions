// Problem: 158A Next Round (Codeforces) - https://codeforces.com/problemset/problem/158/A
// Pattern: Implementation
// Idea: Take the k-th place score as the cutoff, then count everyone with score >= cutoff and score > 0.
// Time: O(n)  Space: O(n)
// Solved: 2026-11-24 (Day 2)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    } 

    int count = 0;
    int thresold = a[k - 1];

    for (int i = 0; i < n; i++){
        if (a[i] >= thresold && a[i] > 0) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
