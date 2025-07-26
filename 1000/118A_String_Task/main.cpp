#include <bits/stdc++.h>

using namespace std;

int main() {
  string in;
  cin >> in;
  int count = 0;
  for (int i = 0; i < in.size(); ++i) {
    if (in[i] < 0x60) {
      in[i] += 0x20;
    }
    if (in[i] == 'a' || in[i] == 'o' || in[i] == 'y' || in[i] == 'e' || in[i] == 'u' || in[i] == 'i') {
      ++count;
    }
  }
  count = in.size() - count;
  string result(count * 2, '.');
  count = 0;
  for (int i = 0; i < in.size(); ++i) {
    if (in[i] == 'a' || in[i] == 'o' || in[i] == 'y' || in[i] == 'e' || in[i] == 'u' || in[i] == 'i') {
    } else {
      result[count * 2 + 1] = in[i];
      ++count;
    }
  }
  cout << result << endl;
  return 0;
}
