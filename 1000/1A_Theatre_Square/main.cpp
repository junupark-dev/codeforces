#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m, a;
  cin >> n >> m >> a;

  long long result;
  if (n % a) {
    result = n / a + 1;
  } else {
    result = n / a;
  }
  if (m % a) {
    result *= m / a + 1;
  } else {
    result *= m / a;
  }
  cout << result << endl;
  return 0;
}
