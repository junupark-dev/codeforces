#include <iostream>

using namespace std;

int main() {
  int input;
  cin >> input;
  if (input % 2 || input < 4) {
    cout << "NO" << endl;
  } else {
    cout << "YES" << endl;
  }
  return 0;
}
