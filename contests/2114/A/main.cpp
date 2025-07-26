#include <bits/stdc++.h>

using namespace std;

void solve();

int sq[101];

int main() {
  ios::sync_with_stdio(0);
  for (int i = 0; i < 101; ++i) {
    sq[i] = i * i;
  }
  int t;
  cin >> t;
  while (t--)
  solve();
  return 0;
}

void solve() {
  string s;
  cin >> s;
  int n = atoi(s.c_str()), *index = find(sq, sq + 101, n), a, b;
  if (index != sq + 101) {
    cout << index - sq << ' ' << 0 << endl;
  } else {
    cout << -1 << endl;
  }
}
