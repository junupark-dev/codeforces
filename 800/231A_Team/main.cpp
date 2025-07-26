#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  int x, y, z, result = 0;
  for (int i = 0; i < n; ++i) {
    cin >> x >> y >> z;
    if (x + y + z > 1) {
      ++result;
    }
  }
  cout << result << endl;
  return 0;
}
