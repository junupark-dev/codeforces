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
  int n, x;
  cin >> n >> x;
  char door[n];
  int i;
  for (i = 0; i < n; ++i) {
    cin >> door[i];
  }
  bool check = false;
  for (i = 0; i < n; ++i) {
    if (door[i] == '1' && !check) {
      i += x - 1;
      check = true;
    } else if (check && door[i] == '1') {
      cout << "NO" << endl;
      return;
    }
  }
  cout << "YES" << endl;
}
