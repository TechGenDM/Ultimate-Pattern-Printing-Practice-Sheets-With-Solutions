// Problem: 2292B Grapefruit Juice (Codeforces, Round 1138 Div. 3 live contest) - https://codeforces.com/contest/2292/problem/B
// Pattern: Greedy
// Idea: Sort, then take groups of k smallest; while a group's sum is below p, add the gap (p - sum) to the total, else stop.
// Time: O(n log n) per test  Space: O(n)
// Solved: 2026-11-27 (Day 5)

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        long long p;
        cin >> n >> k >> p;

        vector<long long> a(n);
        long long ans = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            ans += a[i];
        }

        sort(a.begin(), a.end());

        for (int i = 0; i + k <= n; i += k) {
            long long sum = 0;

            for (int j = i; j < i + k; j++) {
                sum += a[j];
            }

            if (sum < p) {
                ans += p - sum;
            } 
            else {
                break;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
