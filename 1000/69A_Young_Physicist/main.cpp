#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  int x = 0, y = 0, z = 0, x_i, y_i, z_i;
  for (int i = 0; i < n; ++i) {
    cin >> x_i >> y_i >> z_i;
    x += x_i;
    y += y_i;
    z += z_i;
  }
  if (x || y || z) {
    cout << "NO" << endl;
  } else {
    cout << "YES" << endl;
  }
  return 0;
}
