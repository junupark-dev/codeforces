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
  int n;
  cin >> n;
  for (int i = 0; i < n - 1; ++i) {
    cout << i + 2 << ' ';
  }
  cout << 1 << endl;
}
