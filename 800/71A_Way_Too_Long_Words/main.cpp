#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  string word;
  for (int i = 0; i < n; ++i) {
    cin >> word;
    if (word.length() > 10) {
      cout << *word.begin() << word.length() - 2 << *(word.end() - 1) << endl;
    } else {
      cout << word << endl;
    }
  }
  return 0;
}
