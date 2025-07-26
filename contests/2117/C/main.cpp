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
  unordered_set<int> prev_set, reference;
  int count = 1;
/*
  for (i = 1; i < n; ++i) {
    reference.insert(a[i]);
    if (!candidate) {
      if (!prev_set.contains(a[i])) {
        prev_set.insert(a[i]);
      } else {
        candidate = true;
      }
    }
    if (candidate) {
      if (prev_set.contains(a[i])) {
        prev_set.erase(a[i]);
        if (prev_set.empty()) {
          count++;
          candidate = false;
          ++i;
          break;
        }
      }
    }
  }
//-------------------------
  queue<int> q;
  q.push(a[0]);
  for (i = 1; i < n; ++i) {
    reference.insert(a[i]);
    if (q.front() == a[i]) {
      q.pop();
      // segment
    } else {
      q.push();
    }
  }
*/
//-------------------------
  reference.insert(a[0]);
  prev_set = reference;
  for (i = 1; i < n; ++i) {
    reference.insert(a[i]);
    if (prev_set.contains(a[i])) {
      prev_set.erase(a[i]);
      if (prev_set.empty()) {
        count++;
        prev_set = reference;
      }
    }
  }
  cout << count << endl;
}
