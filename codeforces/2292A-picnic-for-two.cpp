// Problem: 2292A Picnic for Two (Codeforces, Round 1138 Div. 3 live contest) - https://codeforces.com/contest/2292/problem/A
// Pattern: Implementation
// Idea: Mark every slice each person visits by stepping a (or b) mod l until a repeat, then count slices marked by both.
// Time: O(l) per test  Space: O(l)
// Solved: 2026-11-27 (Day 5)

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int l, a, b;
        cin >> l >> a >> b;

        vector<bool> strawberry(l, false);
        vector<bool> blueberry(l, false);

        // Audrey places strawberries
        int pos = 0;

        while (!strawberry[pos]) {
            strawberry[pos] = true;
            pos = (pos + a) % l;
        }

        // Sunny places blueberries
        pos = 0;

        while (!blueberry[pos]) {
            blueberry[pos] = true;
            pos = (pos + b) % l;
        }

        // Count slices containing both berries
        int ans = 0;

        for (int i = 0; i < l; i++) {
            if (strawberry[i] && blueberry[i]) {
                ans++;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
