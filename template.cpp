// Problem:
// Pattern:
// Idea:
// Time:   Space:
// Solved:

// Works with g++ (has bits/stdc++.h) AND Apple clang (falls back to normal headers).
#if __has_include(<bits/stdc++.h>)
#include <bits/stdc++.h>
#else
#include <algorithm>
#include <array>
#include <bitset>
#include <climits>
#include <cmath>
#include <cstring>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <tuple>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#endif
using namespace std;

// ---------- Short names ----------
using ll  = long long;
using ull = unsigned long long;
using ld  = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi  = vector<int>;
using vll = vector<ll>;
using vpii = vector<pii>;

#define all(x)  (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x)   (int)(x).size()
#define pb      push_back
#define F       first
#define S       second

// ---------- Constants ----------
const int  MOD  = 1e9 + 7;    // sometimes 998244353, read the problem!
const ll   INF  = 1e18;
const int  IINF = 1e9;
const ld   EPS  = 1e-9;
const int  dx[4] = {-1, 0, 1, 0};   // up, right, down, left (grid moves)
const int  dy[4] = {0, 1, 0, -1};

// ---------- Debug (prints only on your machine, never on the judge) ----------
// Compile locally with -DLOCAL to turn it on:  g++-16 -std=c++17 -DLOCAL file.cpp
#ifdef LOCAL
template <class T> void _p(const T& x) { cerr << x; }
template <class A, class B> void _p(const pair<A, B>& p) { cerr << '(' << p.F << ", " << p.S << ')'; }
template <class T> void _p(const vector<T>& v) { cerr << '['; for (int i = 0; i < sz(v); i++) { if (i) cerr << ", "; _p(v[i]); } cerr << ']'; }
template <class T> void _p(const set<T>& s) { cerr << '{'; bool f = 1; for (auto& x : s) { if (!f) cerr << ", "; _p(x); f = 0; } cerr << '}'; }
template <class K, class V> void _p(const map<K, V>& m) { cerr << '{'; bool f = 1; for (auto& [k, v] : m) { if (!f) cerr << ", "; _p(k); cerr << ": "; _p(v); f = 0; } cerr << '}'; }
void _dbg() { cerr << endl; }
template <class H, class... T> void _dbg(const H& h, const T&... t) { _p(h); if (sizeof...(t)) cerr << " | "; _dbg(t...); }
#define dbg(...) cerr << "[" << #__VA_ARGS__ << "] = ", _dbg(__VA_ARGS__)
#else
#define dbg(...)
#endif

// ---------- Handy math ----------
ll power(ll a, ll b, ll m = MOD) {          // a^b % m in O(log b)
    ll r = 1; a %= m;
    while (b > 0) { if (b & 1) r = r * a % m; a = a * a % m; b >>= 1; }
    return r;
}
ll modinv(ll a, ll m = MOD) { return power(a, m - 2, m); }   // only when m is prime
ll ceil_div(ll a, ll b) { return a / b + ((a % b != 0) && ((a < 0) == (b < 0))); }
bool is_prime(ll n) {
    if (n < 2) return false;
    for (ll i = 2; i * i <= n; i++) if (n % i == 0) return false;
    return true;
}
// gcd(a, b) and lcm(a, b) already exist in C++17 (<numeric>).

// ---------- Read / print a whole vector ----------
template <class T> istream& operator>>(istream& in, vector<T>& v) { for (auto& x : v) in >> x; return in; }
template <class T> ostream& operator<<(ostream& out, const vector<T>& v) { for (int i = 0; i < sz(v); i++) out << v[i] << " \n"[i == sz(v) - 1]; return out; }

// ================== SOLVE ONE TEST CASE ==================
void solve() {
    // int n; cin >> n;
    // vi a(n); cin >> a;
    // cout << a;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;            // <-- uncomment if the problem has many test cases
    while (t--) solve();

    return 0;
}
