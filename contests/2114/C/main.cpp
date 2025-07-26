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
  int n, i;
  cin >> n;
  int a[n];
  for (i = 0; i < n; ++i) {
    cin >> a[i];
  }
  int prev = a[0], count = 1;
  for (i = 1; i < n; ++i) {
    if (a[i] > prev + 1) {
      ++count;
      prev = a[i];
    }
  }
  cout << count << endl;
}
