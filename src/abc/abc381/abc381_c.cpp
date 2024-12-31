#include <bits/stdc++.h>
using namespace std;

#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rrep(i, n) for (int i = 1; i <= (n); ++i)
#define drep(i, n) for (int i = (n) - 1; i >= 0; --i)
#define srep(i, s, t) for (int i = s; i < t; ++i)
#define rng(a) a.begin(), a.end()
#define rrng(a) a.rbegin(), a.rend()
#define maxs(x, y) (x = max(x, y))
#define mins(x, y) (x = min(x, y))
template <typename T>
using vec = vector<T>;
template <typename T>
using vvec = vec<vec<T>>;
using ll = long long;
using ull = unsigned long long;
using P = pair<int, int>;
using T = tuple<int, int, int>;
using vi = vec<int>;
using vvi = vvec<int>;
const ll LINF = 1001002003004005006ll;
const int INF = 1001001001;
const int MOD = 1000000007;

int main() {
  int n;
  cin >> n;
  string s;
  cin >> s;

  auto f = [&n, &s](int m) -> int {
    int length = 1;
    rep(i, n) {
      int l = m - i - 1, r = m + i + 1;
      if (l < 0 || r >= n) break;
      if (s[l] != '1' || s[r] != '2') break;
      length += 2;
    }
    return length;
  };

  int ans = 0;
  rep(i, n) if (s[i] == '/') maxs(ans, f(i));
  cout << ans << endl;
  return 0;
}