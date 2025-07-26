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
  int n, i, j, x, y;
  cin >> n;
  int a[n];
  for (i = 0; i < n; ++i) {
    cin >> a[i];
  }
  vector<pair<int, int>> sol;
  for (i = 0; i < (a[0] / n) + 1; ++i) {
    x = i;
    y = a[0] - (i * n);
    if ((i * (n - 1) + (a[0] - (i * n)) * 2) == a[1]) {
      sol.push_back({x, y});
    }
  }

//------------------
/*
  if (a[0] / n <
  for (i = min(a[0]/n, a[1]/(n-1)); i > -1; ++i) {
    if (
  }
*/
  
  for (i = 2; i < n; ++i) {
    for (j = 0; j < sol.size(); ++j) {
      if ((sol[j].first * (n - i)) + (sol[j].second * (i + 1)) != a[i]) {
        swap(sol[j], sol[sol.size() - 1]);
        --j;
        sol.resize(sol.size() - 1);
      }
    }
  }
/*
    for (auto it = sol.begin(); it != sol.end(); ++it) {
      if ((it->first * (n - i)) + (it->second * (i + 1)) != a[i]) {
        sol.erase(it);
      }
    }
    if (sol.empty()) {
      break;
    }
  }
*/
  if (sol.empty()) {
    cout << "NO" << endl;
  } else {
    cout << "YES" << endl;
  }
}
