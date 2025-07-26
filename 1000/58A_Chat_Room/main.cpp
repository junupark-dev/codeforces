#include <bits/stdc++.h>

using namespace std;

int main() {
  string in, hello = "hello";
  cin >> in;
  int count = 0;
  for (int i = 0; i < in.size(); ++i) {
    if (in[i] == hello[count]) {
      if (++count > 4) { break; }
    }
  }
  if (count == 5) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}
