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
  vi c(n);
  vvi a(n);
  rep(i, n) {
    cin >> c[i];
    int tmp;
    rep(j, c[i]) {
      cin >> tmp;
      a[i].push_back(tmp);
    }
  }
  int x;
  cin >> x;

  vi winners;
  int c_min = INF;
  rep(i, n) rep(j, c[i]) {
    if (a[i][j] != x) continue;
    winners.push_back(i);
    mins(c_min, c[i]);
  }

  vi b;
  for (int w : winners) {
    if (c[w] == c_min) b.push_back(w + 1);
  }
  int b_size = b.size();
  cout << b_size << endl;
  rep(i, b_size) cout << b[i] << (i < b_size - 1 ? " " : "\n");
  return 0;
}
