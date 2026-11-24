# dsa-journey: instructions for Claude Code

This repo is my public DSA notebook for Codeforces (C++). LeetCode is NOT pushed here: I solve it on
leetcode.com, and my LeetCode profile is linked in the README. Ignore the `leetcode/` folder unless I ask.
I write the code myself. Your job is everything around it: tidy files, notes, README, git.
Plan: 6 months, Day 1 = Mon 23 Nov 2026, last day = Sun 23 May 2027.

## Golden rule
- NEVER change my solution logic. Only add the header note and fix file names/locations.
- If you notice a bug or a better approach, tell me in chat after pushing. Do not edit the code.
- Only push solutions I say are Accepted. If I don't say it, assume yes.

## My workflow
I use the CPH extension (Competitive Companion). It creates files in the repo root with names like
`A_Watermelon.cpp`, and stores test cases in `.cph/`.
When I say "push" (or run /push), you tidy and publish everything I solved since the last commit.

## Folder + file names
- Codeforces: `codeforces/<contestId><letter>-<kebab-name>.cpp` → `codeforces/4A-watermelon.cpp`
- Move/rename new solution files from the root into this folder with `git mv` or `mv`.
- If you cannot tell the problem ID from the file name or code, ask me once. Don't guess.

## Header note (top of every solution file)
```cpp
// Problem: 4A Watermelon (Codeforces) - https://codeforces.com/problemset/problem/4/A
// Pattern: Math (even/odd check)
// Idea: Weight must be even AND more than 2, so both halves can be even.
// Time: O(1)  Space: O(1)
// Solved: 2026-11-23 (Day 1)
```
- Read MY code and describe what it actually does, in simple English (1 to 2 short lines).
- If I give my own note in the message (e.g. "4A: trick was w>2"), use my words for Idea.
- Pattern = one of: Implementation, Math, Greedy, Sorting, Hashing, Two pointers, Sliding window,
  Prefix sums, Binary search, Stack, Recursion, Backtracking, Linked list, Trees, BST, Heap, Graphs (BFS/DFS),
  Topological sort, Shortest path, DSU, Bit manipulation, DP, Trie, Strings, Constructive.
- Time/Space: Big-O of MY solution, not the best possible one.
- Don't add a header twice if one already exists.

## README.md (keep it updated on every push)
Keep these sections, in this order:
1. Title + one-line intro: "6-month DSA + competitive programming journey (C++), Nov 2026 to May 2027."
2. Profile links: Codeforces https://codeforces.com/profile/TechGenDM_74 · LeetCode https://leetcode.com/u/TechGenDM/
3. **Stats**: Codeforces problems solved (count files in `codeforces/`), current day number, last updated date.
   Add one line: "LeetCode practice happens on my LeetCode profile (link above)."
4. **Daily log** table, newest first: `| Day | Date | Problems |`, problem IDs as links to the files.
   One row per day. If a row for today exists, add to it.
5. **Re-solve list** (see below).
6. **Patterns**: table of Pattern → count → links to problems, built from the headers.

## Starred problems (spaced repetition)
If I say "star <problem>" (I needed help on it), add it to the Re-solve list with two dates:
today + 3 days and today + 7 days. Each push, tell me if any re-solve date is today or overdue.

## Git
- Make sure `.gitignore` has: `.cph/`, `*.bin`, `*.exe`, `*.out`, `a.out`, `.DS_Store`. Never commit those.
- Commit only solution files, README.md and .gitignore. Show me `git status` if anything else changed.
- Commit message: `Day <N>: 4A, 71A` (N = days since 23 Nov 2026, + 1).
  Saturday virtual contest days: `Day <N>: virtual 1352 (A, B, C)`.
- Then `git pull --rebase` and `git push` to `main`.

## After pushing, reply in 3 short lines max
- What was pushed (files) + today's day number.
- Any re-solve due today.
- One line of feedback on my code if something stood out (optional).