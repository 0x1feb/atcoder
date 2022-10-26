#include <bits/stdc++.h>
using namespace std;

#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rrep(i, n) for (int i = 1; i <= (n); ++i)
#define drep(i, n) for (int i = (n)-1; i >= 0; --i)
#define srep(i, s, t) for (int i = s; i < t; ++i)
#define rng(a) a.begin(), a.end()
#define rrng(a) a.rbegin(), a.rend()
#define maxs(x, y) (x = max(x, y))
#define mins(x, y) (x = min(x, y))
using ll = long long;
using ull = unsigned long long;
using P = pair<int, int>;
using T = tuple<int, int, int>;
using vi = vector<int>;
using vvi = vector<vi>;
const ll LINF = 1001002003004005006ll;
const int INF = 1001001001;
const int MOD = 1000000007;

ll solve(ll x, int k) {
  ll y = 10;

  rep(i, k) {
    ll r = x % y;
    x /= y;
    if (r >= 5 * (y / 10)) x++;
    x *= y;
    y *= 10;
  }

  return x;
}

int main() {
  ll x;
  int k;
  cin >> x >> k;

  ll ans = solve(x, k);
  cout << ans << endl;
  return 0;
}
