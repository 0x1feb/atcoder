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
const int INF = 1001001001;
const int MOD = 1000000007;

int main() {
  int n;
  cin >> n;
  vi a(n), b(n);
  rep(i, n) cin >> a[i] >> b[i];

  int t_max = INF;
  rep(i, n) rep(j, n) {
    if (i == j) {
      mins(t_max, a[i] + b[j]);
    } else {
      mins(t_max, max(a[i], b[j]));
    }
  }
  cout << t_max << endl;
  return 0;
}
