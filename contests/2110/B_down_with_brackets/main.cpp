#include <bits/stdc++.h>

using namespace std;

int main() {
  int t, i, count;
  bool result;
  string s;
  cin >> t;
  while (t--) {
    cin >> s;
    count = 1;
    result = false;
    for (i = 1; i < s.size() - 1; ++i) {
      if (s[i] == '(') { ++count; }
      if (s[i] == ')') { --count; }
      if (!count) { result = true; break; }
    }
    if (result) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
