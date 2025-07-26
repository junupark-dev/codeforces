#include <bits/stdc++.h>

using namespace std;

void solve();

int main() {
  ios::sync_with_stdio(0);
  int t;
  cin >> t;
  while (t--)
  solve();
  return 0;
}

void solve() {
  int n, k, i, c00 = 0, c01 = 0, c10 = 0, c11 = 0, add, sub, sum;
  cin >> n >> k;
  string s;
  cin >> s;
  for (i = 0; i < (n >> 1); ++i) {
    if (s[i] == '0') {
      if (s[n - 1 - i] == '0') {
        ++c00;
      } else {
        ++c01;
      }
    } else {
      if (s[n - 1 - i] == '0') {
        ++c10;
      } else {
        ++c11;
      }
    }
  }
  sum = c00 + c11;
  add = min(c01, c10) * 2;
  sub = min(c00, c11) * 2;
  if ((k >= sum - sub) && (k <= sum + add) && ((k & 1) == (sum & 1))) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}
