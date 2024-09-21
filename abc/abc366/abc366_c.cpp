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
  int q;
  cin >> q;
  unordered_map<int, int> bag;
  int num_types = 0;
  rep(i, q) {
    int query;
    cin >> query;
    int x;
    switch (query) {
      case 1:
        cin >> x;
        bag[x]++;
        if (bag[x] == 1) num_types++;
        break;
      case 2:
        cin >> x;
        bag[x]--;
        if (bag[x] == 0) num_types--;
        break;
      case 3:
        cout << num_types << endl;
        break;
      default:
        break;
    }
  }
  return 0;
}