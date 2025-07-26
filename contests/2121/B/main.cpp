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
  int n, i, count = 0;
  string s;
  cin >> n >> s;
  vector<int> chars(26, 0);
  for (i = 0; i < n; ++i) {
    ++chars[s[i] - 97];
  }
  if (s[0] == s[n - 1]) {
    --chars[s[0] - 97];
  }
  for (i = 0; i < 26; ++i) {
    if (chars[i] > 1) {
      cout << "Yes" << endl;
      return;
    }
  }
  cout << "No" << endl;
}
