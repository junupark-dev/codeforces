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
  int n, s, i;
  cin >> n >> s;
  vector<int> vec(n);
  int minimum, maximum;
  for (i = 0; i < n; ++i) {
    cin >> vec[i];
  }
  minimum = vec[0];
  maximum = vec[0];
  for (i = 1; i < n; ++i) {
    if (vec[i] < minimum) minimum = vec[i];
    if (vec[i] > maximum) maximum = vec[i];
  }
  cout << maximum - minimum + min(abs(maximum - s), abs(minimum - s)) << endl;
}
