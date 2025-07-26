#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, l;
  cin >> n >> l;
  vector<int> vec(n);
  for (int i = 0; i < n; ++i) {
    cin >> vec[i];
  }
  sort(vec.begin(), vec.end());
  double max_dist = vec[0] * 2, dist;
  for (int i = 0; i < n - 1; ++i) {
    dist = vec[i + 1] - vec[i];
    if (dist > max_dist) {
      max_dist = dist;
    }
  }
  dist = (l - vec[n - 1]) * 2;
  if (dist > max_dist) {
    max_dist = dist;
  }
  cout << setprecision(10) << max_dist / 2 << endl;
  return 0;
}
