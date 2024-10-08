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
  int n, m;
  ll d;
  cin >> n >> m >> d;
  vec<ll> a(n), b(m);
  rep(i, n) cin >> a[i];
  rep(i, m) cin >> b[i];

  sort(rng(a), greater<>());
  sort(rng(b), greater<>());
  int i_a = 0, i_b = 0;
  while (i_a < n || i_b < m) {
    if (abs(a[i_a] - b[i_b]) <= d) {
      cout << a[i_a] + b[i_b] << endl;
      return 0;
    }
    if (a[i_a] > b[i_b]) {
      i_a++;
    } else {
      i_b++;
    }
  }
  cout << -1 << endl;
  return 0;
}
