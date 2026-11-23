// Problem: 71A Way Too Long Words (Codeforces) - https://codeforces.com/problemset/problem/71/A
// Pattern: Strings
// Idea: If a word has more than 10 letters, print first letter + (length - 2) + last letter; else print it as is.
// Time: O(total length)  Space: O(max word length)
// Solved: 2026-11-23 (Day 1)
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--)
    {
        string s;
        cin >> s;

        if(s.length() > 10){
            cout << s[0] << s.length()-2 << s[s.length() - 1] << endl;
        } else {
            cout << s << endl;
        }
    }
    

    return 0; 
}
