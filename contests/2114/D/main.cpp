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
  int x[n];
  int y[n];
  for (i = 0; i < n; ++i) {
    cin >> x[i];
    cin >> y[i];
    --x[i];
    --y[i];
  }
  int u = n, d = -1 , l = n, r = -1, pu, pd, pl, pr, puc, pdc, plc, prc;
  int uc = 0, dc = 0, lc = 0, rc = 0;
  for (i = 0; i < n; ++i) {
    if (x[i] == u) {
      ++uc;
    } else if (x[i] < u) {
      pu = u;
      puc = uc;
      u = x[i]; 
      uc = 1;
    }
    if (x[i] == d) {
      ++dc;
    } else if (x[i] > d) {
      pd = d;
      pdc = dc;
      d = x[i];
      dc = 1;
    }
    if (y[i] == l) {
      ++lc;
    } else if (y[i] < l) {
      pl = l;
      plc = lc;
      l = x[i]; 
      lc = 1;
    }
    if (y[i] == r) {
      ++rc;
    } else if (y[i] > r) {
      pr = r;
      prc = rc;
      r = y[i];
      rc = 1;
    }
  }
  int hor = (r - l + 1), ver = (d - u + 1), cost = hor * ver, temp = INT_MAX;
  if (uc == 1 && puc > 0) {
    temp = hor * (d - pu + 1);
    if (temp < cost) {
      cost = temp;
    }
  }
  if (dc == 1 && pdc > 0) {
    temp = hor * (pd - u + 1);
    if (temp < cost) {
      cost = temp;
    }
  }
  if (lc == 1 && plc > 0) {
    temp = ver * (r - pl + 1);
    if (temp < cost) {
      cost = temp;
    }
  }
  if (rc == 1 && prc > 0) {
    temp = ver * (pr - l + 1);
    if (temp < cost) {
      cost = temp;
    }
  }
  cout << cost << endl;
}
