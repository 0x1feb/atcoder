#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rrep(i, n) for (int i = 1; i <= (n); ++i)
#define drep(i, n) for (int i = (n)-1; i >= 0; --i)
#define srep(i, s, t) for (int i = s; i < t; ++i)
#define rng(a) a.begin(), a.end()
#define rrng(a) a.rbegin(), a.rend()
#define maxs(x, y) (x = max(x, y))
#define mins(x, y) (x = min(x, y))
using namespace std;
using ll = long long;
using ull = unsigned long long;
using P = pair<int, int>;
using T = tuple<int, int, int>;
using vi = vector<int>;
using vvi = vector<vi>;
const ll LINF = 1001002003004005006ll;
const int INF = 1 << 30;
const int MOD = 1000000007;

int main() {
  int n;
  cin >> n;
  vi a(n);
  rep(i, n) cin >> a[i];

  int ans = INF;
  rep(i, 1 << (n - 1)) {
    int total = 0;
    int part = 0;
    rep(j, n) {
      part |= a[j];
      if (i & (1 << j)) {
        total ^= part;
        part = 0;
      }
    }
    total ^= part;
    mins(ans, total);
  }

  cout << ans << endl;
  return 0;
}
